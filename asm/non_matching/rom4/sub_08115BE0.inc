	THUMB_FUNC_START sub_08115BE0
sub_08115BE0: @ 0x08115BE0
	push {r4-r7,lr}
	ldr r2, _08115C78  @ =gRam
	ldr r1, _08115C7C  @ =0x00001754
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r3, _08115C80  @ =gUnknown_0200EBA0
	add r0, r1, r3
	ldrb r0, [r0]
	mov r4, #150
	lsl r4, r4, #4
	add r6, r2, r4
	mov r4, #0
	strb r0, [r6]
	ldr r5, _08115C84  @ =gUnknown_0200EBB4
	add r0, r1, r5
	ldrb r3, [r0]
	ldr r7, _08115C88  @ =0x00000961
	add r0, r2, r7
	strb r3, [r0]
	ldr r3, _08115C8C  @ =gUnknown_0200EBC8
	add r0, r1, r3
	ldrb r0, [r0]
	add r7, r7, #3
	add r5, r2, r7
	strb r0, [r5]
	add r3, r3, #20
	add r0, r1, r3
	ldrb r3, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r3, [r0]
	ldr r0, _08115C90  @ =0x00000975
	add r3, r2, r0
	strb r4, [r3]
	ldr r4, _08115C94  @ =gUnknown_0200EBF0
	add r1, r1, r4
	ldrb r0, [r1]
	add r7, r7, #15
	add r2, r2, r7
	strb r0, [r2]
	ldrb r1, [r1]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08115C3E
	mov r0, #255
	strb r0, [r3]
_08115C3E:
	ldrh r0, [r6]
	add r0, r0, #12
	ldrh r2, [r2]
	add r0, r0, r2
	strh r0, [r6]
	ldrh r0, [r5]
	add r0, r0, #8
	strh r0, [r5]
	mov r0, #0
	ldrsh r1, [r6, r0]
	ldr r0, _08115C98  @ =0x00001568
	sub r0, r0, r1
	cmp r0, #0
	bge _08115C5C
	neg r0, r0
_08115C5C:
	cmp r0, #23
	bgt _08115C74
	mov r3, #0
	ldrsh r1, [r5, r3]
	mov r0, #204
	lsl r0, r0, #5
	sub r0, r0, r1
	cmp r0, #0
	bge _08115C70
	neg r0, r0
_08115C70:
	cmp r0, #23
	ble _08115C9C
_08115C74:
	mov r0, #0
	b _08115C9E
_08115C78:
	.4byte gRam
_08115C7C:
	.4byte 0x00001754
_08115C80:
	.4byte gUnknown_0200EBA0
_08115C84:
	.4byte gUnknown_0200EBB4
_08115C88:
	.4byte 0x00000961
_08115C8C:
	.4byte gUnknown_0200EBC8
_08115C90:
	.4byte 0x00000975
_08115C94:
	.4byte gUnknown_0200EBF0
_08115C98:
	.4byte 0x00001568
_08115C9C:
	mov r0, #1
_08115C9E:
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08115BE0

