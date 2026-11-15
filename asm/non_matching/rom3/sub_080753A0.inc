	THUMB_FUNC_START sub_080753A0
sub_080753A0: @ 0x080753A0
	push {r4,r5,lr}
	ldr r1, _080753D8  @ =gRam
	ldr r2, _080753DC  @ =0x000009B2
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080753C0
	add r2, r2, #54
	add r0, r1, r2
	ldrh r0, [r0]
	cmp r0, #4
	bhi _080753C0
	bl sub_081334D8
_080753C0:
	ldr r4, _080753D8  @ =gRam
	ldr r0, _080753E0  @ =0x000009E8
	add r5, r4, r0
	ldrh r0, [r5]
	cmp r0, #6
	bne _080753E8
	ldr r0, _080753E4  @ =gUnknown_0814DAC0
	ldr r0, [r0, #24]
	bl _call_via_r0
	b _08075452
	.byte 0x00
	.byte 0x00
_080753D8:
	.4byte gRam
_080753DC:
	.4byte 0x000009B2
_080753E0:
	.4byte 0x000009E8
_080753E4:
	.4byte gUnknown_0814DAC0
_080753E8:
	bl sub_081295CC
	ldr r1, _08075410  @ =0x000009AE
	add r0, r4, r1
	mov r1, #0
	strb r1, [r0]
	mov r2, #201
	lsl r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	ldrh r0, [r5]
	cmp r0, #5
	bne _08075418
	bl sub_08129698
	ldr r0, _08075414  @ =gUnknown_0814DAC0
	ldr r0, [r0, #20]
	bl _call_via_r0
	b _08075452
_08075410:
	.4byte 0x000009AE
_08075414:
	.4byte gUnknown_0814DAC0
_08075418:
	ldr r1, _08075438  @ =0x000009AD
	add r0, r4, r1
	ldrb r1, [r0]
	cmp r1, #0
	bne _08075452
	ldr r0, _0807543C  @ =0x00001AE2
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #255
	bne _08075444
	strh r1, [r5]
	ldr r1, _08075440  @ =0x00001AEE
	add r0, r4, r1
	ldrb r0, [r0]
	strb r0, [r2]
	b _08075452
_08075438:
	.4byte 0x000009AD
_0807543C:
	.4byte 0x00001AE2
_08075440:
	.4byte 0x00001AEE
_08075444:
	ldr r0, _08075458  @ =gUnknown_0814DAC0
	ldrh r1, [r5]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	bl _call_via_r0
_08075452:
	pop {r4,r5}
	pop {r0}
	bx r0
_08075458:
	.4byte gUnknown_0814DAC0
	THUMB_FUNC_END sub_080753A0

