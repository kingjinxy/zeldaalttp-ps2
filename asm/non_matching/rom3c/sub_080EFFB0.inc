	THUMB_FUNC_START sub_080EFFB0
sub_080EFFB0: @ 0x080EFFB0
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EFFCC
	b _080F0160
_080EFFCC:
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EFFDA
	b _080F0160
_080EFFDA:
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	ldr r5, _080F0044  @ =gRam
	ldr r1, _080F0048  @ =0x00000FE2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EFFF6
	add r0, r4, #0
	bl sub_080C4F98
_080EFFF6:
	ldr r2, _080F004C  @ =0x00001052
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r3, r0, #25
	mov r0, #3
	and r3, r3, r0
	ldr r0, _080F0050  @ =0x00000F92
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080F0054  @ =gUnknown_08178CA0
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080F0058  @ =0x00001122
	add r2, r5, r1
	add r2, r4, r2
	ldrb r0, [r2]
	mov r1, #191
	and r1, r1, r0
	strb r1, [r2]
	ldr r0, _080F005C  @ =gUnknown_08178CA4
	add r0, r3, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	ldr r2, _080F0060  @ =0x00001042
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F0064
	add r0, r4, #0
	bl Sprite3_Move
	b _080F0092
_080F0044:
	.4byte gRam
_080F0048:
	.4byte 0x00000FE2
_080F004C:
	.4byte 0x00001052
_080F0050:
	.4byte 0x00000F92
_080F0054:
	.4byte gUnknown_08178CA0
_080F0058:
	.4byte 0x00001122
_080F005C:
	.4byte gUnknown_08178CA4
_080F0060:
	.4byte 0x00001042
_080F0064:
	ldr r1, _080F0120  @ =0x000010E2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	bl GetRandomInt
	mov r3, #3
	and r3, r3, r0
	ldr r2, _080F0124  @ =0x00000F22
	add r1, r5, r2
	add r1, r4, r1
	ldr r0, _080F0128  @ =gUnknown_08178C98
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080F012C  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080F0130  @ =gUnknown_08178C9C
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
_080F0092:
	add r0, r4, #0
	bl sub_080C6F48
	ldr r5, _080F0134  @ =gRam
	ldr r1, _080F0120  @ =0x000010E2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F00E6
	ldr r2, _080F0138  @ =0x00000996
	add r0, r5, r2
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #31
	and r0, r0, r1
	cmp r0, #0
	bne _080F00E6
	add r0, r4, #0
	mov r1, #16
	bl sub_080C2CB4
	ldr r0, _080F012C  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	ldrb r0, [r0]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F0124  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	add r2, r2, #1
	add r0, r5, r2
	ldrb r0, [r0]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
_080F00E6:
	ldr r2, _080F0134  @ =gRam
	ldr r1, _080F0138  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080F0160
	ldr r1, _080F013C  @ =0x000010A2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	lsl r0, r1, #24
	lsr r0, r0, #24
	cmp r0, #192
	bne _080F0140
	add r0, r4, #0
	mov r1, #15
	bl sub_080C6E4C
	add r0, r4, #0
	mov r1, #1
	mov r2, #217
	bl sub_080F016C
	b _080F0160
	.byte 0x00
	.byte 0x00
_080F0120:
	.4byte 0x000010E2
_080F0124:
	.4byte 0x00000F22
_080F0128:
	.4byte gUnknown_08178C98
_080F012C:
	.4byte 0x00000F12
_080F0130:
	.4byte gUnknown_08178C9C
_080F0134:
	.4byte gRam
_080F0138:
	.4byte 0x00000996
_080F013C:
	.4byte 0x000010A2
_080F0140:
	mov r0, #15
	and r1, r1, r0
	cmp r1, #0
	bne _080F0160
	ldr r1, _080F0168  @ =0x00001082
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	mov r2, #219
	cmp r0, #6
	beq _080F0158
	mov r2, #217
_080F0158:
	add r0, r4, #0
	mov r1, #0
	bl sub_080F016C
_080F0160:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080F0168:
	.4byte 0x00001082
	THUMB_FUNC_END sub_080EFFB0

