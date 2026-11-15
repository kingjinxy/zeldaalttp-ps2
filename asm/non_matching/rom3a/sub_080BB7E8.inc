	THUMB_FUNC_START sub_080BB7E8
sub_080BB7E8: @ 0x080BB7E8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r6, #15
	ldr r7, _080BB864  @ =gRam
	mov r0, #0
	mov r10, r0
	ldr r1, _080BB868  @ =0x000009AD
	add r1, r1, r7
	mov r8, r1
	ldr r2, _080BB86C  @ =0x00000FA2
	add r2, r2, r7
	mov r9, r2
_080BB806:
	ldr r1, _080BB870  @ =0x00000FF2
	add r0, r7, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080BB850
	lsl r4, r6, #24
	lsr r4, r4, #24
	ldr r2, _080BB874  @ =0x00001012
	add r0, r7, r2
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	ldr r2, _080BB878  @ =0x000015DC
	add r1, r7, r2
	strb r4, [r1]
	bl sub_080CF370
	add r0, r4, #0
	bl sub_080C1F70
	mov r0, r8
	ldrb r5, [r0]
	mov r1, r10
	strb r1, [r0]
	mov r2, r9
	add r1, r4, r2
	mov r0, #9
	strb r0, [r1]
	add r0, r4, #0
	bl SpriteActive_MainLong
	mov r0, r8
	strb r5, [r0]
_080BB850:
	sub r6, r6, #1
	cmp r6, #0
	bge _080BB806
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080BB864:
	.4byte gRam
_080BB868:
	.4byte 0x000009AD
_080BB86C:
	.4byte 0x00000FA2
_080BB870:
	.4byte 0x00000FF2
_080BB874:
	.4byte 0x00001012
_080BB878:
	.4byte 0x000015DC
	THUMB_FUNC_END sub_080BB7E8

