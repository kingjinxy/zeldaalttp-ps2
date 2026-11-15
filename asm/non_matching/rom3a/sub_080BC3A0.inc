	THUMB_FUNC_START sub_080BC3A0
sub_080BC3A0: @ 0x080BC3A0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r6, #1
	ldr r0, _080BC40C  @ =gRam
	mov r8, r0
	mov r0, #0
	mov r10, r0
	ldr r7, _080BC410  @ =0x000009AD
	add r7, r7, r8
	ldr r0, _080BC414  @ =0x00000FA2
	add r0, r0, r8
	mov r9, r0
_080BC3BE:
	lsl r4, r6, #24
	lsr r4, r4, #24
	ldr r0, _080BC418  @ =0x00001012
	add r0, r0, r8
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	ldr r1, _080BC41C  @ =0x000015DC
	add r1, r1, r8
	strb r4, [r1]
	bl sub_080CF370
	add r0, r4, #0
	bl sub_080C1F70
	ldrb r5, [r7]
	mov r0, r10
	strb r0, [r7]
	mov r0, r9
	add r1, r4, r0
	mov r0, #9
	strb r0, [r1]
	add r0, r4, #0
	bl SpriteActive_MainLong
	strb r5, [r7]
	sub r6, r6, #1
	cmp r6, #0
	bge _080BC3BE
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080BC40C:
	.4byte gRam
_080BC410:
	.4byte 0x000009AD
_080BC414:
	.4byte 0x00000FA2
_080BC418:
	.4byte 0x00001012
_080BC41C:
	.4byte 0x000015DC
	THUMB_FUNC_END sub_080BC3A0

