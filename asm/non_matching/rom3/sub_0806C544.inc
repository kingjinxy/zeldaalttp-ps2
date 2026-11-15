	THUMB_FUNC_START sub_0806C544
sub_0806C544: @ 0x0806C544
	push {r4-r6,lr}
	ldr r1, _0806C5FC  @ =gRam
	ldr r0, _0806C600  @ =0x000009D3
	add r2, r1, r0
	mov r0, #2
	strb r0, [r2]
	ldr r0, _0806C604  @ =0x000009D4
	add r2, r1, r0
	mov r0, #179
	strb r0, [r2]
	ldr r2, _0806C608  @ =0x00000B02
	add r0, r1, r2
	ldrh r6, [r0]
	ldr r2, _0806C60C  @ =0x00000CF5
	add r0, r1, r2
	ldrb r4, [r0]
	add r5, r1, #0
	cmp r4, #0
	bne _0806C5C8
	mov r1, #32
	mov r6, #3
	ldr r2, _0806C610  @ =0x00000ABA
	add r0, r5, r2
	ldrh r0, [r0]
	cmp r0, #0
	beq _0806C5C2
	mov r1, #50
	cmp r0, #7
	beq _0806C5C2
	mov r1, #98
	cmp r0, #4
	beq _0806C5C2
	mov r1, #32
	cmp r0, #2
	bne _0806C5C2
	bl sub_081335FC
	ldr r1, _0806C614  @ =0x000009DA
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #13
	bne _0806C5C0
	ldr r2, _0806C618  @ =0x00000D0A
	add r0, r5, r2
	strh r4, [r0]
	ldr r1, _0806C61C  @ =0x00000D0C
	add r0, r5, r1
	strh r4, [r0]
	add r2, r2, #4
	add r0, r5, r2
	strh r4, [r0]
	add r1, r1, #4
	add r0, r5, r1
	strh r4, [r0]
	add r2, r2, #4
	add r0, r5, r2
	strh r4, [r0]
	add r1, r1, #4
	add r0, r5, r1
	strh r4, [r0]
	bl sub_08132F78
_0806C5C0:
	mov r1, #112
_0806C5C2:
	ldr r2, _0806C604  @ =0x000009D4
	add r0, r5, r2
	strb r1, [r0]
_0806C5C8:
	ldr r0, _0806C604  @ =0x000009D4
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #179
	bne _0806C5F4
	ldr r2, _0806C614  @ =0x000009DA
	add r0, r5, r2
	ldrh r0, [r0]
	cmp r0, #11
	beq _0806C5F4
	cmp r0, #106
	beq _0806C5F4
	cmp r0, #146
	beq _0806C5F4
	cmp r0, #147
	beq _0806C5F4
	cmp r0, #153
	beq _0806C5F4
	cmp r0, #186
	beq _0806C5F4
	mov r0, #176
	strb r0, [r1]
_0806C5F4:
	add r0, r6, #0
	pop {r4-r6}
	pop {r1}
	bx r1
_0806C5FC:
	.4byte gRam
_0806C600:
	.4byte 0x000009D3
_0806C604:
	.4byte 0x000009D4
_0806C608:
	.4byte 0x00000B02
_0806C60C:
	.4byte 0x00000CF5
_0806C610:
	.4byte 0x00000ABA
_0806C614:
	.4byte 0x000009DA
_0806C618:
	.4byte 0x00000D0A
_0806C61C:
	.4byte 0x00000D0C
	THUMB_FUNC_END sub_0806C544

