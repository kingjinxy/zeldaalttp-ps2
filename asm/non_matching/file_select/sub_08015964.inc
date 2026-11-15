	THUMB_FUNC_START sub_08015964
sub_08015964: @ 0x08015964
	push {r4-r7,lr}
	add r6, r0, #0
	add r5, r1, #0
	add r7, r2, #0
	bl sub_080123E8
	add r4, r0, #0
	cmp r4, #0
	beq _080159E6
	mov r3, #0
	mov r0, #6
	strb r0, [r4, #8]
	mov r0, #8
	strb r0, [r4, #9]
	add r0, r5, #0
	add r0, r0, #53
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r4, #11]
	ldr r2, _080159EC  @ =gUnknown_081381AC
	mov r1, #3
	and r1, r1, r0
	lsl r0, r1, #2
	add r0, r0, r2
	ldrh r0, [r0]
	ldrh r5, [r6, #50]
	add r0, r0, r5
	strh r0, [r4, #50]
	lsl r1, r1, #1
	add r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r2
	ldrh r0, [r1]
	ldrh r6, [r6, #54]
	add r0, r0, r6
	strh r0, [r4, #54]
	add r2, r4, #0
	add r2, r2, #126
	ldrh r1, [r2]
	mov r0, #2
	orr r0, r0, r1
	strh r0, [r2]
	mov r0, #50
	ldrsh r1, [r4, r0]
	ldr r2, _080159F0  @ =gUnknown_03000450
	ldrh r0, [r2, #24]
	sub r1, r1, r0
	asr r1, r1, #4
	mov r5, #54
	ldrsh r0, [r4, r5]
	ldrh r2, [r2, #26]
	sub r0, r0, r2
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	lsl r1, r1, #1
	add r0, r7, #4
	add r0, r0, r1
	strh r3, [r0]
	mov r0, #6
	add r1, r4, #0
	bl sub_08012728
_080159E6:
	pop {r4-r7}
	pop {r0}
	bx r0
_080159EC:
	.4byte gUnknown_081381AC
_080159F0:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_08015964

