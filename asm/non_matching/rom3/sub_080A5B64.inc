	THUMB_FUNC_START sub_080A5B64
sub_080A5B64: @ 0x080A5B64
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #16
	lsr r0, r0, #18
	lsl r0, r0, #24
	mov r2, #7
	lsr r1, r0, #24
	ldr r4, _080A5B94  @ =gRam
	ldr r5, _080A5B98  @ =gUnknown_0816B518
	ldr r6, _080A5B9C  @ =gUnknown_0816B300
	mov r3, #128
	lsl r3, r3, #1
_080A5B82:
	lsl r0, r1, #17
	lsr r1, r0, #16
	add r0, r1, #0
	and r0, r0, r3
	cmp r0, #0
	beq _080A5BA0
	add r0, r2, #0
	b _080A5BAC
	.byte 0x00
	.byte 0x00
_080A5B94:
	.4byte gRam
_080A5B98:
	.4byte gUnknown_0816B518
_080A5B9C:
	.4byte gUnknown_0816B300
_080A5BA0:
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _080A5B82
	mov r0, #0
_080A5BAC:
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, r5
	ldr r2, _080A5CE4  @ =0x00001797
	add r1, r4, r2
	ldrb r1, [r1]
	ldrb r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #2
	ldr r3, _080A5CE8  @ =0x0000096C
	add r2, r4, r3
	mov r3, #0
	strb r1, [r2]
	ldr r5, _080A5CEC  @ =0x0000096D
	add r0, r4, r5
	strb r3, [r0]
	ldr r0, _080A5CF0  @ =0x00001744
	add r1, r4, r0
	mov r0, #66
	strb r0, [r1]
	ldr r1, _080A5CF4  @ =0x00001732
	add r0, r4, r1
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r6
	ldr r1, [r0]
	sub r5, r5, #5
	add r0, r4, r5
	ldrb r7, [r0]
	add r1, r1, r7
	ldr r5, _080A5CF8  @ =0x000017E2
	add r0, r4, r5
	ldrh r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r8, r0
	ldrh r7, [r2]
	strh r3, [r2]
	ldr r0, _080A5CFC  @ =0x00000975
	add r0, r0, r4
	mov r10, r0
	ldr r1, _080A5D00  @ =0x00000974
	add r1, r1, r4
	mov r9, r1
_080A5C0A:
	ldr r2, _080A5D04  @ =gRam
	ldr r3, _080A5D08  @ =0x00000961
	add r1, r2, r3
	ldr r0, _080A5D0C  @ =gUnknown_0816B4F8
	add r0, r7, r0
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	mov r5, r10
	strb r0, [r5]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r2, r0
	ldr r0, _080A5D10  @ =gUnknown_0816B508
	add r0, r7, r0
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, r9
	strb r0, [r1]
	ldr r0, _080A5D14  @ =gUnknown_0816B4E8
	add r1, r7, r0
	ldrb r0, [r1]
	cmp r0, #255
	beq _080A5CBC
	ldr r1, _080A5D18  @ =gUnknown_0816B4E6
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _080A5D1C  @ =0x0000CFFF
	add r0, r2, #0
	and r1, r1, r0
	ldr r3, _080A5D20  @ =0x00001723
	add r0, r4, r3
	ldrb r2, [r0]
	ldr r5, _080A5D24  @ =0x00001724
	add r0, r4, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	orr r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r0, r8
	bl sub_080A452C
	mov r0, r9
	ldrb r5, [r0]
	mov r1, r10
	ldrb r1, [r1]
	mov r12, r1
	mov r2, r8
	lsr r0, r2, #2
	lsl r0, r0, #3
	mov r3, #170
	lsl r3, r3, #3
	add r1, r4, r3
	add r2, r0, r1
	ldr r0, _080A5D28  @ =gUnknown_03003E68
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A5CB0
	ldr r0, _080A5D2C  @ =0x000001FF
	add r4, r0, #0
	ldrh r0, [r2, #2]
	ldr r6, _080A5D30  @ =0xFFFFFE00
	add r3, r6, #0
	and r3, r3, r0
	orr r3, r3, r5
	strh r3, [r2, #2]
	mov r1, r12
	strb r1, [r2]
	cmp r5, #240
	bls _080A5CB0
	lsl r0, r3, #23
	lsr r0, r0, #23
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	and r0, r0, r4
	and r3, r3, r6
	orr r3, r3, r0
	strh r3, [r2, #2]
_080A5CB0:
	mov r0, r8
	add r0, r0, #4
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r8, r0
	ldr r4, _080A5D04  @ =gRam
_080A5CBC:
	add r0, r7, #1
	lsl r0, r0, #16
	lsr r7, r0, #16
	ldr r2, _080A5CE8  @ =0x0000096C
	add r1, r4, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, #4
	bne _080A5C0A
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A5CE4:
	.4byte 0x00001797
_080A5CE8:
	.4byte 0x0000096C
_080A5CEC:
	.4byte 0x0000096D
_080A5CF0:
	.4byte 0x00001744
_080A5CF4:
	.4byte 0x00001732
_080A5CF8:
	.4byte 0x000017E2
_080A5CFC:
	.4byte 0x00000975
_080A5D00:
	.4byte 0x00000974
_080A5D04:
	.4byte gRam
_080A5D08:
	.4byte 0x00000961
_080A5D0C:
	.4byte gUnknown_0816B4F8
_080A5D10:
	.4byte gUnknown_0816B508
_080A5D14:
	.4byte gUnknown_0816B4E8
_080A5D18:
	.4byte gUnknown_0816B4E6
_080A5D1C:
	.4byte 0x0000CFFF
_080A5D20:
	.4byte 0x00001723
_080A5D24:
	.4byte 0x00001724
_080A5D28:
	.4byte gUnknown_03003E68
_080A5D2C:
	.4byte 0x000001FF
_080A5D30:
	.4byte 0xFFFFFE00
	THUMB_FUNC_END sub_080A5B64

