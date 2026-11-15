	THUMB_FUNC_START sub_080C65E0
sub_080C65E0: @ 0x080C65E0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r0, _080C6608  @ =gUnknown_03003E74
	ldrh r7, [r0]
	mov r3, #1
	ldr r2, _080C660C  @ =gRam
	ldr r1, _080C6610  @ =0x00001032
	add r0, r2, r1
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080C6614
	add r0, r6, #0
	bl SpriteActive_Main
	b _080C6684
	.byte 0x00
	.byte 0x00
_080C6608:
	.4byte gUnknown_03003E74
_080C660C:
	.4byte gRam
_080C6610:
	.4byte 0x00001032
_080C6614:
	ldr r4, _080C668C  @ =0x00000996
	add r0, r2, r4
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	add r4, r4, #23
	add r1, r2, r4
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r4, _080C6690  @ =0x00001605
	add r1, r2, r4
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _080C663E
	ldr r0, _080C6694  @ =0x00000FC2
	add r1, r2, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080C663E:
	ldr r1, _080C6698  @ =0x00000FF2
	add r0, r2, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #64
	beq _080C6658
	ldr r4, _080C6694  @ =0x00000FC2
	add r0, r2, r4
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #9
	bhi _080C6658
	mov r3, #0
_080C6658:
	cmp r3, #0
	beq _080C667A
	ldr r0, _080C669C  @ =0x00001012
	add r4, r2, r0
	add r4, r6, r4
	ldrb r5, [r4]
	ldr r1, _080C66A0  @ =gUnknown_03003E74
	ldrh r0, [r1]
	add r0, r0, #4
	strh r0, [r1]
	ldrb r0, [r4]
	sub r0, r0, #4
	strb r0, [r4]
	add r0, r6, #0
	bl SpriteActive_Main
	strb r5, [r4]
_080C667A:
	ldr r0, _080C66A0  @ =gUnknown_03003E74
	strh r7, [r0]
	add r0, r6, #0
	bl sub_080C6C7C
_080C6684:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C668C:
	.4byte 0x00000996
_080C6690:
	.4byte 0x00001605
_080C6694:
	.4byte 0x00000FC2
_080C6698:
	.4byte 0x00000FF2
_080C669C:
	.4byte 0x00001012
_080C66A0:
	.4byte gUnknown_03003E74
	THUMB_FUNC_END sub_080C65E0

