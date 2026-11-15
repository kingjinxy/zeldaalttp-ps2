	THUMB_FUNC_START sub_0807A3CC
sub_0807A3CC: @ 0x0807A3CC
	push {r4-r7,lr}
	mov r3, #15
	ldr r4, _0807A44C  @ =gRam
	ldr r0, _0807A450  @ =0x00000FA2
	add r7, r4, r0
	ldr r1, _0807A454  @ =0x00001132
	add r5, r4, r1
	mov r6, #64
_0807A3DC:
	add r0, r3, r7
	ldrb r2, [r0]
	cmp r2, #4
	beq _0807A446
	add r0, r3, r5
	ldrb r1, [r0]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0807A3F4
	cmp r2, #0
	bne _0807A446
_0807A3F4:
	sub r3, r3, #1
	cmp r3, #0
	bge _0807A3DC
	ldr r2, _0807A458  @ =0x00001718
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #1
	beq _0807A446
	ldr r1, _0807A45C  @ =0x00001770
	add r0, r4, r1
	mov r3, #0
	mov r1, #27
	strb r1, [r0]
	ldr r2, _0807A460  @ =0x000009AD
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _0807A464  @ =0x000009E8
	add r0, r4, r1
	mov r2, #0
	strh r3, [r0]
	sub r1, r1, #2
	add r0, r4, r1
	strb r2, [r0]
	ldr r0, _0807A468  @ =0x00001885
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _0807A46C  @ =0x000016E8
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #2
	add r0, r4, r1
	strb r2, [r0]
	ldr r2, _0807A470  @ =0x00000A02
	add r1, r4, r2
	mov r0, #100
	strb r0, [r1]
	ldr r0, _0807A474  @ =0x00000A03
	add r1, r4, r0
	mov r0, #3
	strb r0, [r1]
_0807A446:
	pop {r4-r7}
	pop {r0}
	bx r0
_0807A44C:
	.4byte gRam
_0807A450:
	.4byte 0x00000FA2
_0807A454:
	.4byte 0x00001132
_0807A458:
	.4byte 0x00001718
_0807A45C:
	.4byte 0x00001770
_0807A460:
	.4byte 0x000009AD
_0807A464:
	.4byte 0x000009E8
_0807A468:
	.4byte 0x00001885
_0807A46C:
	.4byte 0x000016E8
_0807A470:
	.4byte 0x00000A02
_0807A474:
	.4byte 0x00000A03
	THUMB_FUNC_END sub_0807A3CC

