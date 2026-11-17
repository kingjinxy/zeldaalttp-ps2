	THUMB_FUNC_START sub_081358FC
sub_081358FC: @ 0x081358FC
	push {r4-r6,lr}
	add r4, r0, #0
	add r6, r1, #0
	ldr r1, [r6, #64]
	ldrb r5, [r1]
	add r2, r1, #1
	str r2, [r6, #64]
	ldr r0, [r4, #24]
	ldrb r1, [r1, #1]
	add r3, r1, r0
	add r0, r2, #1
	str r0, [r6, #64]
	ldrb r2, [r2, #1]
	add r0, r0, #1
	str r0, [r6, #64]
	cmp r5, #17
	bls _08135920
	b _08135A4E
_08135920:
	lsl r0, r5, #2
	ldr r1, _0813592C  @ =0x08135930
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_0813592C:
	.4byte _0813592C+0x4
	.4byte _08135978
	.4byte _0813597C
	.4byte _08135984
	.4byte _0813598C
	.4byte _08135996
	.4byte _081359A4
	.4byte _081359B2
	.4byte _081359BA
	.4byte _081359C2
	.4byte _081359CA
	.4byte _081359D2
	.4byte _081359DA
	.4byte _081359E2
	.4byte _081359F0
	.4byte _081359FE
	.4byte _08135A0C
	.4byte _08135A1A
	.4byte _08135A28
_08135978:
	strb r2, [r3]
	b _08135A4E
_0813597C:
	ldrb r1, [r3]
	add r0, r1, r2
	strb r0, [r3]
	b _08135A4E
_08135984:
	ldrb r1, [r3]
	sub r0, r1, r2
	strb r0, [r3]
	b _08135A4E
_0813598C:
	ldr r0, [r4, #24]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r3]
	b _08135A4E
_08135996:
	ldr r0, [r4, #24]
	add r0, r0, r2
	ldrb r1, [r3]
	ldrb r0, [r0]
	add r0, r1, r0
	strb r0, [r3]
	b _08135A4E
_081359A4:
	ldr r0, [r4, #24]
	add r0, r0, r2
	ldrb r1, [r3]
	ldrb r0, [r0]
	sub r0, r1, r0
	strb r0, [r3]
	b _08135A4E
_081359B2:
	ldrb r3, [r3]
	cmp r3, r2
	beq _08135A34
	b _08135A48
_081359BA:
	ldrb r3, [r3]
	cmp r3, r2
	bne _08135A34
	b _08135A48
_081359C2:
	ldrb r3, [r3]
	cmp r3, r2
	bhi _08135A34
	b _08135A48
_081359CA:
	ldrb r3, [r3]
	cmp r3, r2
	bcs _08135A34
	b _08135A48
_081359D2:
	ldrb r3, [r3]
	cmp r3, r2
	bls _08135A34
	b _08135A48
_081359DA:
	ldrb r3, [r3]
	cmp r3, r2
	bcc _08135A34
	b _08135A48
_081359E2:
	ldr r0, [r4, #24]
	add r0, r0, r2
	ldrb r3, [r3]
	ldrb r0, [r0]
	cmp r3, r0
	beq _08135A34
	b _08135A48
_081359F0:
	ldr r0, [r4, #24]
	add r0, r0, r2
	ldrb r3, [r3]
	ldrb r0, [r0]
	cmp r3, r0
	bne _08135A34
	b _08135A48
_081359FE:
	ldr r0, [r4, #24]
	add r0, r0, r2
	ldrb r3, [r3]
	ldrb r0, [r0]
	cmp r3, r0
	bhi _08135A34
	b _08135A48
_08135A0C:
	ldr r0, [r4, #24]
	add r0, r0, r2
	ldrb r3, [r3]
	ldrb r0, [r0]
	cmp r3, r0
	bcs _08135A34
	b _08135A48
_08135A1A:
	ldr r0, [r4, #24]
	add r0, r0, r2
	ldrb r3, [r3]
	ldrb r0, [r0]
	cmp r3, r0
	bls _08135A34
	b _08135A48
_08135A28:
	ldr r0, [r4, #24]
	add r0, r0, r2
	ldrb r3, [r3]
	ldrb r0, [r0]
	cmp r3, r0
	bcs _08135A48
_08135A34:
	ldr r0, _08135A44  @ =gUnknown_02031A34
	ldr r2, [r0]
	add r0, r4, #0
	add r1, r6, #0
	bl _call_via_r2
	b _08135A4E
	.byte 0x00
	.byte 0x00
_08135A44:
	.4byte gUnknown_02031A34
_08135A48:
	ldr r0, [r6, #64]
	add r0, r0, #4
	str r0, [r6, #64]
_08135A4E:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081358FC

