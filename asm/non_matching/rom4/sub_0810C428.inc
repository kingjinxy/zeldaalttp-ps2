	THUMB_FUNC_START sub_0810C428
sub_0810C428: @ 0x0810C428
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r7, _0810C464  @ =gRam
	ldr r1, _0810C468  @ =0x00000FC2
	add r0, r7, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #16
	bne _0810C478
	add r0, r6, #0
	mov r1, #64
	bl sub_080C35FC
	ldr r2, _0810C46C  @ =0x00000F22
	add r0, r7, r2
	add r0, r6, r0
	ldr r2, _0810C470  @ =0x00000961
	add r1, r7, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _0810C474  @ =0x00000F12
	add r0, r7, r1
	add r0, r6, r0
	sub r2, r2, #1
	add r1, r7, r2
	ldrb r1, [r1]
	strb r1, [r0]
	b _0810C4FE
_0810C464:
	.4byte gRam
_0810C468:
	.4byte 0x00000FC2
_0810C46C:
	.4byte 0x00000F22
_0810C470:
	.4byte 0x00000961
_0810C474:
	.4byte 0x00000F12
_0810C478:
	cmp r0, #0
	bne _0810C4FE
	add r0, r6, #0
	bl Sprite3_Move
	mov r0, sp
	add r1, r6, #0
	bl sub_080C4948
	add r0, r6, #0
	bl sub_0810C208
	ldr r1, _0810C508  @ =0x00000996
	add r0, r7, r1
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _0810C4D6
	mov r0, #154
	add r1, r6, #0
	mov r2, #8
	bl sub_080C9AAC
	add r5, r0, #0
	cmp r5, #0
	blt _0810C4D6
	lsl r4, r5, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080CAE50
	add r0, r4, #0
	bl sub_080E9A10
	ldr r2, _0810C50C  @ =0x000011B2
	add r1, r7, r2
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #240
	and r0, r0, r2
	strb r0, [r1]
	ldr r1, _0810C510  @ =0x00000EA5
	add r0, r7, r1
	add r0, r5, r0
	mov r1, #5
	strb r1, [r0]
_0810C4D6:
	ldr r2, _0810C514  @ =gRam
	ldr r1, _0810C518  @ =0x00001042
	add r0, r2, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810C4FE
	sub r1, r1, #240
	add r0, r2, r1
	add r0, r6, r0
	mov r1, #5
	strb r1, [r0]
	ldr r1, _0810C51C  @ =0x00000FD2
	add r0, r2, r1
	add r0, r6, r0
	mov r1, #192
	strb r1, [r0]
	add r0, r6, #0
	bl sub_0810C520
_0810C4FE:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810C508:
	.4byte 0x00000996
_0810C50C:
	.4byte 0x000011B2
_0810C510:
	.4byte 0x00000EA5
_0810C514:
	.4byte gRam
_0810C518:
	.4byte 0x00001042
_0810C51C:
	.4byte 0x00000FD2
	THUMB_FUNC_END sub_0810C428

