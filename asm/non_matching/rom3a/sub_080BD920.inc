	THUMB_FUNC_START sub_080BD920
sub_080BD920: @ 0x080BD920
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	bl sub_080BDB54
	mov r4, #4
	ldr r6, _080BD968  @ =gUnknown_03003222
	mov r5, #207
_080BD930:
	add r0, r4, r6
	strb r5, [r0]
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CEB84
	sub r4, r4, #1
	cmp r4, #0
	bge _080BD930
	add r0, r7, #0
	bl sub_080B9454
	mov r4, #4
	ldr r6, _080BD96C  @ =gUnknown_030031F2
	mov r5, #250
_080BD94E:
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080F95A8
	add r0, r4, r6
	strb r5, [r0]
	sub r5, r5, #50
	sub r4, r4, #1
	cmp r4, #0
	bge _080BD94E
	pop {r4-r7}
	pop {r0}
	bx r0
_080BD968:
	.4byte gUnknown_03003222
_080BD96C:
	.4byte gUnknown_030031F2
	THUMB_FUNC_END sub_080BD920

