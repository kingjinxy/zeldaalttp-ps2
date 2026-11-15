	THUMB_FUNC_START sub_080DD1CC
sub_080DD1CC: @ 0x080DD1CC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080DD1F0  @ =gRam
	ldr r1, _080DD1F4  @ =0x00001052
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	cmp r1, #2
	bne _080DD200
	ldr r2, _080DD1F8  @ =0x0000096C
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080DD1FC  @ =gUnknown_08176180
	add r0, r5, #0
	bl sub_080C94D0
	b _080DD246
_080DD1F0:
	.4byte gRam
_080DD1F4:
	.4byte 0x00001052
_080DD1F8:
	.4byte 0x0000096C
_080DD1FC:
	.4byte gUnknown_08176180
_080DD200:
	ldr r3, _080DD24C  @ =0x00000FB2
	add r0, r4, r3
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r6, _080DD250  @ =0x00000F92
	add r0, r4, r6
	add r0, r5, r0
	lsl r1, r1, #1
	ldrb r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #25
	lsr r1, r1, #24
	ldr r0, _080DD254  @ =0x0000096C
	add r2, r4, r0
	mov r0, #2
	strh r0, [r2]
	ldr r3, _080DD258  @ =gUnknown_08176210
	add r0, r1, r3
	ldrb r2, [r0]
	ldr r6, _080DD25C  @ =0x00000CDE
	add r0, r4, r6
	strh r2, [r0]
	add r0, r1, #1
	add r0, r0, r3
	ldrb r2, [r0]
	mov r3, #206
	lsl r3, r3, #4
	add r0, r4, r3
	strh r2, [r0]
	lsl r1, r1, #3
	ldr r0, _080DD260  @ =gUnknown_08176190
	add r1, r1, r0
	add r0, r5, #0
	bl sub_080C94D0
_080DD246:
	pop {r4-r6}
	pop {r0}
	bx r0
_080DD24C:
	.4byte 0x00000FB2
_080DD250:
	.4byte 0x00000F92
_080DD254:
	.4byte 0x0000096C
_080DD258:
	.4byte gUnknown_08176210
_080DD25C:
	.4byte 0x00000CDE
_080DD260:
	.4byte gUnknown_08176190
	THUMB_FUNC_END sub_080DD1CC

