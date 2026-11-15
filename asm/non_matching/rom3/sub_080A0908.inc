	THUMB_FUNC_START sub_080A0908
sub_080A0908: @ 0x080A0908
	push {lr}
	ldr r3, _080A093C  @ =gRam
	ldr r1, _080A0940  @ =0x00001649
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A0938
	ldr r1, _080A0944  @ =0x00000AA8
	add r0, r3, r1
	ldrh r0, [r0]
	lsr r0, r0, #8
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080A0938
	ldr r0, _080A0948  @ =0x0000177C
	add r2, r3, r0
	ldr r1, _080A094C  @ =0x00000974
	add r0, r3, r1
	ldrh r0, [r0]
	lsl r0, r0, #4
	ldrh r1, [r2]
	orr r0, r0, r1
	strh r0, [r2]
_080A0938:
	pop {r0}
	bx r0
_080A093C:
	.4byte gRam
_080A0940:
	.4byte 0x00001649
_080A0944:
	.4byte 0x00000AA8
_080A0948:
	.4byte 0x0000177C
_080A094C:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A0908

