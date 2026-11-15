	THUMB_FUNC_START sub_08079A10
sub_08079A10: @ 0x08079A10
	push {r4-r7,lr}
	add r5, r0, #0
	ldr r0, _08079B50  @ =gRam
	ldr r2, _08079B54  @ =0x00001770
	add r1, r0, r2
	ldrb r1, [r1]
	add r6, r0, #0
	cmp r1, #0
	beq _08079A24
	b _08079B78
_08079A24:
	ldr r3, _08079B58  @ =0x00001702
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _08079A30
	b _08079B78
_08079A30:
	bl sub_08079884
	add r2, r0, #0
	mov r4, #0
	ldr r3, _08079B5C  @ =gUnknown_0200CBA0
	add r0, r2, r3
	ldrb r1, [r0]
	cmp r1, #35
	bne _08079A4C
	ldr r7, _08079B60  @ =gUnknown_0200CBA1
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #35
	beq _08079B14
_08079A4C:
	cmp r1, #58
	bne _08079A5A
	ldr r7, _08079B60  @ =gUnknown_0200CBA1
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #58
	beq _08079B14
_08079A5A:
	mov r4, #1
	cmp r1, #59
	bne _08079A6A
	ldr r1, _08079B60  @ =gUnknown_0200CBA1
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #59
	beq _08079B14
_08079A6A:
	add r2, r2, #64
	mov r4, #0
	add r0, r2, r3
	ldrb r1, [r0]
	cmp r1, #35
	bne _08079A80
	ldr r7, _08079B60  @ =gUnknown_0200CBA1
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #35
	beq _08079B14
_08079A80:
	cmp r1, #58
	bne _08079A8E
	ldr r7, _08079B60  @ =gUnknown_0200CBA1
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #58
	beq _08079B14
_08079A8E:
	mov r4, #1
	cmp r1, #59
	bne _08079A9E
	ldr r1, _08079B60  @ =gUnknown_0200CBA1
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #59
	beq _08079B14
_08079A9E:
	mov r2, #150
	lsl r2, r2, #4
	add r0, r6, r2
	ldrh r1, [r0]
	add r1, r1, #1
	strh r1, [r0]
	mov r7, #0
	ldrsh r2, [r0, r7]
	mov r4, #0
	add r0, r2, r3
	ldrb r1, [r0]
	cmp r1, #35
	bne _08079AC2
	ldr r7, _08079B60  @ =gUnknown_0200CBA1
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #35
	beq _08079B14
_08079AC2:
	cmp r1, #58
	bne _08079AD0
	ldr r7, _08079B60  @ =gUnknown_0200CBA1
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #58
	beq _08079B14
_08079AD0:
	mov r4, #1
	cmp r1, #59
	bne _08079AE0
	ldr r1, _08079B60  @ =gUnknown_0200CBA1
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #59
	beq _08079B14
_08079AE0:
	add r2, r2, #64
	mov r4, #0
	add r0, r2, r3
	ldrb r1, [r0]
	cmp r1, #35
	bne _08079AF6
	ldr r3, _08079B60  @ =gUnknown_0200CBA1
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #35
	beq _08079B14
_08079AF6:
	cmp r1, #58
	bne _08079B04
	ldr r7, _08079B60  @ =gUnknown_0200CBA1
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #58
	beq _08079B14
_08079B04:
	cmp r1, #59
	bne _08079B78
	ldr r1, _08079B60  @ =gUnknown_0200CBA1
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #59
	bne _08079B78
	mov r4, #1
_08079B14:
	ldr r3, _08079B64  @ =gUnknown_0200CBE0
	add r0, r2, r3
	ldr r7, _08079B5C  @ =gUnknown_0200CBA0
	add r1, r2, r7
	ldrb r3, [r1]
	ldrb r0, [r0]
	ldr r6, _08079B50  @ =gRam
	cmp r0, r3
	bne _08079B78
	ldr r1, _08079B68  @ =gUnknown_0200CBE1
	add r0, r2, r1
	add r7, r7, #1
	add r1, r2, r7
	ldrb r0, [r0]
	ldrb r7, [r1]
	cmp r0, r7
	bne _08079B78
	ldr r7, _08079B6C  @ =0x00000978
	add r0, r6, r7
	strb r3, [r0]
	ldrb r1, [r1]
	ldr r3, _08079B70  @ =0x00000979
	add r0, r6, r3
	strb r1, [r0]
	ldr r7, _08079B74  @ =0x00000B5E
	add r0, r6, r7
	strh r2, [r0]
	str r4, [r5]
	mov r0, #1
	b _08079B80
_08079B50:
	.4byte gRam
_08079B54:
	.4byte 0x00001770
_08079B58:
	.4byte 0x00001702
_08079B5C:
	.4byte gUnknown_0200CBA0
_08079B60:
	.4byte gUnknown_0200CBA1
_08079B64:
	.4byte gUnknown_0200CBE0
_08079B68:
	.4byte gUnknown_0200CBE1
_08079B6C:
	.4byte 0x00000978
_08079B70:
	.4byte 0x00000979
_08079B74:
	.4byte 0x00000B5E
_08079B78:
	ldr r0, _08079B88  @ =0x00000B5E
	add r1, r6, r0
	mov r0, #0
	strh r0, [r1]
_08079B80:
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08079B88:
	.4byte 0x00000B5E
	THUMB_FUNC_END sub_08079A10

