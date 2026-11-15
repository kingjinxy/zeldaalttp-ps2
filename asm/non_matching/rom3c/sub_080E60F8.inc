	THUMB_FUNC_START sub_080E60F8
sub_080E60F8: @ 0x080E60F8
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	mov r1, #18
	bl sub_080C35FC
	ldr r5, _080E6210  @ =gRam
	ldr r1, _080E6214  @ =0x00001042
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E611A
	add r0, r4, #0
	bl Sprite3_Move
_080E611A:
	add r0, r4, #0
	bl sub_080C7A48
	ldr r2, _080E6218  @ =0x00000FC2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E61B4
	mov r3, #1
	ldr r6, _080E621C  @ =0x000016C4
	add r0, r5, r6
	ldrb r1, [r0]
	ldr r2, _080E6220  @ =0x000016C5
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	sub r6, r6, #162
	add r0, r5, r6
	ldrb r2, [r0]
	add r6, r6, #1
	add r0, r5, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	lsl r1, r1, #16
	mov r0, #160
	lsl r0, r0, #15
	add r1, r1, r0
	lsr r1, r1, #16
	cmp r1, #159
	bhi _080E619A
	mov r1, #182
	lsl r1, r1, #5
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _080E6224  @ =0x000016C1
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	add r6, r6, #1
	add r0, r5, r6
	ldrb r2, [r0]
	add r6, r6, #1
	add r0, r5, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	lsl r1, r1, #16
	mov r0, #160
	lsl r0, r0, #15
	add r1, r1, r0
	lsr r1, r1, #16
	cmp r1, #159
	bhi _080E619A
	mov r3, #0
_080E619A:
	cmp r3, #0
	beq _080E61B4
	ldr r2, _080E6210  @ =gRam
	ldr r1, _080E6228  @ =0x00000F52
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r3, _080E6218  @ =0x00000FC2
	add r2, r2, r3
	add r2, r4, r2
	mov r0, #128
	strb r0, [r2]
_080E61B4:
	add r0, r4, #0
	bl sub_080C4F98
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E61E4
	ldr r2, _080E6210  @ =gRam
	ldr r6, _080E6228  @ =0x00000F52
	add r1, r2, r6
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080E6218  @ =0x00000FC2
	add r2, r2, r0
	add r2, r4, r2
	mov r0, #32
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080E6650
	add r0, r4, #0
	bl sub_080E692C
_080E61E4:
	ldr r2, _080E6210  @ =gRam
	ldr r1, _080E622C  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	cmp r0, #0
	beq _080E6204
	ldr r3, _080E6230  @ =0x00000FB2
	add r0, r2, r3
	add r0, r4, r0
	ldr r6, _080E6234  @ =0x00001082
	add r1, r2, r6
	add r1, r4, r1
	ldrb r1, [r1]
	strb r1, [r0]
_080E6204:
	add r0, r4, #0
	bl sub_080E68E0
	pop {r4-r6}
	pop {r0}
	bx r0
_080E6210:
	.4byte gRam
_080E6214:
	.4byte 0x00001042
_080E6218:
	.4byte 0x00000FC2
_080E621C:
	.4byte 0x000016C4
_080E6220:
	.4byte 0x000016C5
_080E6224:
	.4byte 0x000016C1
_080E6228:
	.4byte 0x00000F52
_080E622C:
	.4byte 0x00000996
_080E6230:
	.4byte 0x00000FB2
_080E6234:
	.4byte 0x00001082
	THUMB_FUNC_END sub_080E60F8

