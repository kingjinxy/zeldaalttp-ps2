	THUMB_FUNC_START sub_080E85D0
sub_080E85D0: @ 0x080E85D0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080E86A0  @ =gRam
	ldr r0, _080E86A4  @ =0x00001172
	add r1, r6, r0
	add r1, r5, r1
	ldr r2, _080E86A8  @ =0x00000FC2
	add r0, r6, r2
	add r0, r0, r5
	mov r8, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r3, r8
	ldrb r0, [r3]
	cmp r0, #0
	bne _080E8696
	bl GetRandomInt
	mov r1, #7
	and r1, r1, r0
	ldr r7, _080E86AC  @ =0x00000F62
	add r0, r6, r7
	add r0, r5, r0
	ldrb r2, [r0]
	ldr r3, _080E86B0  @ =0x00000F72
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r0, _080E86B4  @ =gUnknown_08177970
	add r0, r1, r0
	ldrb r3, [r0]
	add r2, r3, r2
	ldr r0, _080E86B8  @ =gUnknown_08177978
	add r1, r1, r0
	ldrb r4, [r1]
	lsl r4, r4, #8
	add r2, r2, r4
	add r7, r7, #32
	add r0, r6, r7
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r7, _080E86BC  @ =0x00001082
	add r0, r6, r7
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r3, r3, r1
	add r3, r3, r4
	ldr r1, _080E86C0  @ =0x00000EE2
	add r0, r6, r1
	add r0, r5, r0
	strb r2, [r0]
	ldr r7, _080E86C4  @ =0x00000F02
	add r0, r6, r7
	add r0, r5, r0
	lsr r2, r2, #8
	strb r2, [r0]
	sub r1, r1, #16
	add r0, r6, r1
	add r0, r5, r0
	strb r3, [r0]
	ldr r2, _080E86C8  @ =0x00000EF2
	add r0, r6, r2
	add r0, r5, r0
	lsr r3, r3, #8
	strb r3, [r0]
	add r0, r5, #0
	bl sub_080C1F70
	add r0, r5, #0
	bl sub_080C79F8
	ldr r3, _080E86CC  @ =0x000015E2
	add r0, r6, r3
	ldrh r0, [r0]
	cmp r0, #8
	bne _080E8696
	mov r0, #127
	mov r7, r8
	strb r0, [r7]
	ldr r0, _080E86D0  @ =0x00000F52
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r2, _080E86D4  @ =0x00001032
	add r1, r6, r2
	add r1, r5, r1
	ldrb r0, [r1]
	mov r2, #64
	orr r0, r0, r2
	strb r0, [r1]
_080E8696:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080E86A0:
	.4byte gRam
_080E86A4:
	.4byte 0x00001172
_080E86A8:
	.4byte 0x00000FC2
_080E86AC:
	.4byte 0x00000F62
_080E86B0:
	.4byte 0x00000F72
_080E86B4:
	.4byte gUnknown_08177970
_080E86B8:
	.4byte gUnknown_08177978
_080E86BC:
	.4byte 0x00001082
_080E86C0:
	.4byte 0x00000EE2
_080E86C4:
	.4byte 0x00000F02
_080E86C8:
	.4byte 0x00000EF2
_080E86CC:
	.4byte 0x000015E2
_080E86D0:
	.4byte 0x00000F52
_080E86D4:
	.4byte 0x00001032
	THUMB_FUNC_END sub_080E85D0

