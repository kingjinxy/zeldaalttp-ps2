	THUMB_FUNC_START sub_080E8E60
sub_080E8E60: @ 0x080E8E60
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r0, sp
	add r1, r6, #0
	bl sub_080C4948
	ldr r4, _080E8F74  @ =gRam
	ldr r1, _080E8F78  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080E8EBA
	ldr r2, _080E8F7C  @ =0x000010A2
	add r1, r4, r2
	add r1, r6, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	bne _080E8EBA
	ldr r1, _080E8F80  @ =0x00000F72
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #2
	strb r1, [r0]
	ldr r2, _080E8F84  @ =0x00000FA2
	add r0, r4, r2
	add r0, r6, r0
	ldrb r2, [r0]
	mov r1, #9
	strb r1, [r0]
	cmp r2, #10
	bne _080E8EBA
	ldr r1, _080E8F88  @ =0x00001791
	add r0, r4, r1
	strb r3, [r0]
	ldr r2, _080E8F8C  @ =0x00001792
	add r0, r4, r2
	strb r3, [r0]
_080E8EBA:
	ldr r0, _080E8F74  @ =gRam
	ldr r2, _080E8F7C  @ =0x000010A2
	add r1, r0, r2
	add r1, r6, r1
	ldrb r1, [r1]
	add r7, r0, #0
	cmp r1, #47
	bhi _080E8F0A
	ldr r1, _080E8F78  @ =0x00000996
	add r0, r7, r1
	ldrb r3, [r0]
	mov r0, #1
	and r0, r0, r3
	cmp r0, #0
	bne _080E8F0A
	lsr r3, r3, #1
	mov r0, #1
	and r3, r3, r0
	ldr r2, _080E8F90  @ =0x00000EE2
	add r5, r7, r2
	add r5, r6, r5
	ldrb r1, [r5]
	ldr r0, _080E8F94  @ =0x00000F02
	add r4, r7, r0
	add r4, r6, r4
	ldrb r2, [r4]
	lsl r2, r2, #8
	ldr r0, _080E8F98  @ =gUnknown_08177A64
	add r0, r3, r0
	orr r1, r1, r2
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _080E8F9C  @ =gUnknown_08177A66
	add r3, r3, r0
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r1, r1, r0
	strb r1, [r5]
	lsr r1, r1, #8
	strb r1, [r4]
_080E8F0A:
	ldr r1, _080E8FA0  @ =0x00000F92
	add r0, r7, r1
	add r0, r6, r0
	mov r5, #0
	strb r5, [r0]
	ldr r2, _080E8FA4  @ =0x00001042
	add r0, r7, r2
	add r0, r6, r0
	strb r5, [r0]
	add r0, r6, #0
	bl sub_080E9240
	ldr r0, _080E8FA8  @ =0x00001012
	add r4, r7, r0
	add r4, r6, r4
	ldrb r0, [r4]
	sub r0, r0, #2
	strb r0, [r4]
	add r0, r6, #0
	bl sub_080C6240
	ldrb r0, [r4]
	add r0, r0, #2
	strb r0, [r4]
	ldr r1, _080E8FAC  @ =0x00001092
	add r0, r7, r1
	add r0, r6, r0
	strb r5, [r0]
	add r0, r6, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E8F6C
	add r0, r6, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E8F6C
	add r0, r6, #0
	bl Sprite3_Move
	add r0, r6, #0
	bl sub_080C8168
	add r0, r6, #0
	bl sub_080E91FC
_080E8F6C:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080E8F74:
	.4byte gRam
_080E8F78:
	.4byte 0x00000996
_080E8F7C:
	.4byte 0x000010A2
_080E8F80:
	.4byte 0x00000F72
_080E8F84:
	.4byte 0x00000FA2
_080E8F88:
	.4byte 0x00001791
_080E8F8C:
	.4byte 0x00001792
_080E8F90:
	.4byte 0x00000EE2
_080E8F94:
	.4byte 0x00000F02
_080E8F98:
	.4byte gUnknown_08177A64
_080E8F9C:
	.4byte gUnknown_08177A66
_080E8FA0:
	.4byte 0x00000F92
_080E8FA4:
	.4byte 0x00001042
_080E8FA8:
	.4byte 0x00001012
_080E8FAC:
	.4byte 0x00001092
	THUMB_FUNC_END sub_080E8E60

