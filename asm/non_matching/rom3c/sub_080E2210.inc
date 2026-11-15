	THUMB_FUNC_START sub_080E2210
sub_080E2210: @ 0x080E2210
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080E2254  @ =gRam
	ldr r3, _080E2258  @ =0x000010F2
	add r1, r2, r3
	add r4, r0, r1
	ldr r5, _080E225C  @ =0x000009B2
	add r0, r2, r5
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080E226C
	ldr r1, _080E2260  @ =0x00001622
	add r0, r2, r1
	ldrb r0, [r0]
	ldr r3, _080E2264  @ =0x00001623
	add r1, r2, r3
	ldrb r1, [r1]
	lsl r1, r1, #8
	orr r0, r0, r1
	ldr r5, _080E2268  @ =0x00001624
	add r1, r2, r5
	ldrb r1, [r1]
	add r3, r3, #2
	add r2, r2, r3
	ldrb r2, [r2]
	lsl r2, r2, #8
	orr r1, r1, r2
	bl sub_080C8F6C
	b _080E2298
	.byte 0x00
	.byte 0x00
_080E2254:
	.4byte gRam
_080E2258:
	.4byte 0x000010F2
_080E225C:
	.4byte 0x000009B2
_080E2260:
	.4byte 0x00001622
_080E2264:
	.4byte 0x00001623
_080E2268:
	.4byte 0x00001624
_080E226C:
	ldr r5, _080E22B8  @ =0x00001622
	add r0, r2, r5
	ldrb r0, [r0]
	ldr r3, _080E22BC  @ =0x00001623
	add r1, r2, r3
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r0, r0, r1
	ldr r3, _080E22C0  @ =0x000001FF
	and r0, r0, r3
	add r5, r5, #2
	add r1, r2, r5
	ldrb r1, [r1]
	add r5, r5, #1
	add r2, r2, r5
	ldrb r2, [r2]
	lsl r2, r2, #8
	add r1, r1, r2
	and r1, r1, r3
	ldrb r2, [r4]
	bl sub_080928A4
_080E2298:
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _080E22C4  @ =gRam
	ldr r2, _080E22C8  @ =0x000015E2
	add r0, r0, r2
	strh r1, [r0]
	ldr r0, _080E22CC  @ =gUnknown_08172370
	add r0, r1, r0
	ldrb r1, [r0]
	neg r0, r1
	orr r0, r0, r1
	lsr r0, r0, #31
	pop {r4,r5}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080E22B8:
	.4byte 0x00001622
_080E22BC:
	.4byte 0x00001623
_080E22C0:
	.4byte 0x000001FF
_080E22C4:
	.4byte gRam
_080E22C8:
	.4byte 0x000015E2
_080E22CC:
	.4byte gUnknown_08172370
	THUMB_FUNC_END sub_080E2210

