	THUMB_FUNC_START sub_080F5364
sub_080F5364: @ 0x080F5364
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r4, r5, #0
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r5, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F545C
	ldr r6, _080F53D8  @ =gRam
	ldr r1, _080F53DC  @ =0x000009B2
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080F53E8
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F545C
	ldr r2, _080F53E0  @ =0x00001052
	add r0, r6, r2
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #127
	and r1, r1, r0
	cmp r1, #0
	bne _080F545C
	ldr r1, _080F53E4  @ =0x000010F2
	add r0, r6, r1
	add r0, r5, r0
	mov r2, #161
	lsl r2, r2, #4
	add r1, r6, r2
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080F545C
	add r0, r5, #0
	bl sub_080E89E4
	cmp r0, #0
	blt _080F545C
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080F5490
	b _080F545C
_080F53D8:
	.4byte gRam
_080F53DC:
	.4byte 0x000009B2
_080F53E0:
	.4byte 0x00001052
_080F53E4:
	.4byte 0x000010F2
_080F53E8:
	ldr r1, _080F5464  @ =0x00000F22
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	ldr r2, _080F5468  @ =0x00001002
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #1
	neg r1, r1
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C7A48
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F545C
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F545C
	ldr r1, _080F546C  @ =0x00000FF2
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #25
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080CEB84
	ldr r2, _080F5470  @ =0x00001062
	add r1, r6, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F5474  @ =0x00000EE2
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #8
	strb r0, [r1]
	ldr r2, _080F5478  @ =0x00000ED2
	add r1, r6, r2
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #7
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #89
	bl sub_080CF140
	ldr r1, _080F547C  @ =0x00000E75
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #128
	strb r1, [r0]
_080F545C:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080F5464:
	.4byte 0x00000F22
_080F5468:
	.4byte 0x00001002
_080F546C:
	.4byte 0x00000FF2
_080F5470:
	.4byte 0x00001062
_080F5474:
	.4byte 0x00000EE2
_080F5478:
	.4byte 0x00000ED2
_080F547C:
	.4byte 0x00000E75
	THUMB_FUNC_END sub_080F5364

