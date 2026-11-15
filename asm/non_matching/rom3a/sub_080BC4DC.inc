	THUMB_FUNC_START sub_080BC4DC
sub_080BC4DC: @ 0x080BC4DC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r6, #15
	ldr r7, _080BC570  @ =gRam
	ldr r0, _080BC574  @ =0x000009AD
	add r0, r0, r7
	mov r8, r0
	ldr r1, _080BC578  @ =0x00000FA2
	add r1, r1, r7
	mov r10, r1
_080BC4F6:
	ldr r2, _080BC57C  @ =0x00000FF2
	add r2, r2, r7
	mov r9, r2
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080BC542
	lsl r4, r6, #24
	lsr r4, r4, #24
	ldr r1, _080BC580  @ =0x00001012
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	ldr r2, _080BC584  @ =0x000015DC
	add r1, r7, r2
	strb r4, [r1]
	bl sub_080CF370
	add r0, r4, #0
	bl sub_080C1F70
	mov r0, r8
	ldrb r5, [r0]
	mov r1, #0
	strb r1, [r0]
	mov r2, r10
	add r1, r4, r2
	mov r0, #9
	strb r0, [r1]
	add r0, r4, #0
	bl SpriteActive_MainLong
	mov r0, r8
	strb r5, [r0]
_080BC542:
	sub r6, r6, #1
	cmp r6, #0
	bge _080BC4F6
	mov r6, #15
	mov r3, r9
	sub r3, r3, #80
	mov r2, r9
_080BC550:
	add r0, r6, r3
	ldrb r1, [r0]
	cmp r1, #0
	bne _080BC55C
	add r0, r6, r2
	strb r1, [r0]
_080BC55C:
	sub r6, r6, #1
	cmp r6, #0
	bge _080BC550
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080BC570:
	.4byte gRam
_080BC574:
	.4byte 0x000009AD
_080BC578:
	.4byte 0x00000FA2
_080BC57C:
	.4byte 0x00000FF2
_080BC580:
	.4byte 0x00001012
_080BC584:
	.4byte 0x000015DC
	THUMB_FUNC_END sub_080BC4DC

