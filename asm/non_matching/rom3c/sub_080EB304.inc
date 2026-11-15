	THUMB_FUNC_START sub_080EB304
sub_080EB304: @ 0x080EB304
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r4, r5, #0
	add r0, r5, #0
	bl sub_080EB1F0
	ldr r6, _080EB374  @ =gRam
	ldr r1, _080EB378  @ =0x000009AC
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #26
	bne _080EB32E
	ldr r2, _080EB37C  @ =0x00000964
	add r1, r6, r2
	ldrh r0, [r1]
	sub r0, r0, #16
	strh r0, [r1]
	add r0, r5, #0
	bl sub_080EAAF0
_080EB32E:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EB36E
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EB36E
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C6F48
	ldr r1, _080EB380  @ =gUnknown_08177D74
	ldr r2, _080EB384  @ =0x00000F52
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080EB36E:
	pop {r4-r6}
	pop {r0}
	bx r0
_080EB374:
	.4byte gRam
_080EB378:
	.4byte 0x000009AC
_080EB37C:
	.4byte 0x00000964
_080EB380:
	.4byte gUnknown_08177D74
_080EB384:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EB304

