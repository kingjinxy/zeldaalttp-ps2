	THUMB_FUNC_START sub_080C86D8
sub_080C86D8: @ 0x080C86D8
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl Sprite3_CheckIfActive_Permissive
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _080C8742
	ldr r3, _080C8748  @ =gRam
	ldr r1, _080C874C  @ =0x00000996
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080C870A
	ldr r6, _080C8750  @ =0x00000FC2
	add r1, r3, r6
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080C870A:
	ldr r1, _080C8754  @ =0x00001122
	add r0, r3, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r6, _080C8758  @ =0x000010C2
	add r0, r3, r6
	add r0, r4, r0
	strb r2, [r0]
	ldr r1, _080C8750  @ =0x00000FC2
	add r0, r3, r1
	add r2, r4, r0
	ldrb r1, [r2]
	cmp r1, #0
	bne _080C872E
	ldr r6, _080C875C  @ =0x00000FA2
	add r0, r3, r6
	add r0, r4, r0
	strb r1, [r0]
_080C872E:
	ldrb r0, [r2]
	lsl r0, r0, #1
	asr r1, r0, #3
	lsl r1, r1, #4
	ldr r0, _080C8760  @ =gUnknown_081724F0
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #2
	bl sub_080C9480
_080C8742:
	pop {r4-r6}
	pop {r0}
	bx r0
_080C8748:
	.4byte gRam
_080C874C:
	.4byte 0x00000996
_080C8750:
	.4byte 0x00000FC2
_080C8754:
	.4byte 0x00001122
_080C8758:
	.4byte 0x000010C2
_080C875C:
	.4byte 0x00000FA2
_080C8760:
	.4byte gUnknown_081724F0
	THUMB_FUNC_END sub_080C86D8

