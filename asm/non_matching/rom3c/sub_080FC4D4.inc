	THUMB_FUNC_START sub_080FC4D4
sub_080FC4D4: @ 0x080FC4D4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _080FC53C  @ =gRam
	ldr r1, _080FC540  @ =0x00000996
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080FC536
	ldr r5, _080FC544  @ =0x000016C4
	add r2, r3, r5
	ldr r1, _080FC548  @ =0x00001622
	add r0, r3, r1
	ldrb r1, [r0]
	sub r5, r5, #161
	add r0, r3, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	add r0, r0, #36
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #71
	bhi _080FC536
	mov r0, #182
	lsl r0, r0, #5
	add r2, r3, r0
	ldr r1, _080FC54C  @ =0x00001624
	add r0, r3, r1
	ldrb r1, [r0]
	add r5, r5, #2
	add r0, r3, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	add r0, r0, #40
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #63
	bhi _080FC536
	add r0, r4, #0
	bl sub_080C3BD0
_080FC536:
	pop {r4,r5}
	pop {r0}
	bx r0
_080FC53C:
	.4byte gRam
_080FC540:
	.4byte 0x00000996
_080FC544:
	.4byte 0x000016C4
_080FC548:
	.4byte 0x00001622
_080FC54C:
	.4byte 0x00001624
	THUMB_FUNC_END sub_080FC4D4

