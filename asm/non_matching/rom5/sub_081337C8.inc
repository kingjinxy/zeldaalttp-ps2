	THUMB_FUNC_START sub_081337C8
sub_081337C8: @ 0x081337C8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	lsl r1, r1, #24
	lsr r4, r1, #24
	ldr r0, _081337F8  @ =gRam
	ldr r2, _081337FC  @ =0x00001644
	add r1, r0, r2
	ldrb r2, [r1]
	cmp r2, #0
	beq _08133816
	ldr r5, _08133800  @ =0x000009AD
	add r0, r0, r5
	ldrb r0, [r0]
	cmp r0, #0
	bne _08133816
	sub r2, r2, #1
	strb r2, [r1]
	lsl r0, r2, #24
	cmp r0, #0
	bne _08133804
	bl sub_08132448
	b _08133816
_081337F8:
	.4byte gRam
_081337FC:
	.4byte 0x00001644
_08133800:
	.4byte 0x000009AD
_08133804:
	lsl r0, r2, #24
	lsr r0, r0, #24
	cmp r0, r4
	bcc _08133816
	and r3, r3, r2
	cmp r3, #0
	bne _08133816
	bl sub_0813215C
_08133816:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081337C8

