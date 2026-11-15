	THUMB_FUNC_START sub_080ECE4C
sub_080ECE4C: @ 0x080ECE4C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	ldr r5, _080ECEA8  @ =gRam
	ldr r1, _080ECEAC  @ =0x00001122
	add r0, r5, r1
	add r0, r4, r0
	mov r2, #0
	mov r1, #7
	strb r1, [r0]
	ldr r0, _080ECEB0  @ =0x00000A2A
	add r6, r5, r0
	strh r2, [r6]
	ldr r1, _080ECEB4  @ =0x000010E2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080ECE8A
	mov r2, #1
	and r2, r2, r0
	ldr r3, _080ECEB8  @ =gUnknown_08178594
	add r0, r2, #2
	add r0, r0, r3
	ldrb r1, [r0]
	lsl r1, r1, #8
	add r2, r2, r3
	ldrb r0, [r2]
	add r0, r0, r1
	strh r0, [r6]
_080ECE8A:
	ldr r1, _080ECEBC  @ =gUnknown_081785A0
	ldr r2, _080ECEC0  @ =0x000010A2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ECEA8:
	.4byte gRam
_080ECEAC:
	.4byte 0x00001122
_080ECEB0:
	.4byte 0x00000A2A
_080ECEB4:
	.4byte 0x000010E2
_080ECEB8:
	.4byte gUnknown_08178594
_080ECEBC:
	.4byte gUnknown_081785A0
_080ECEC0:
	.4byte 0x000010A2
	THUMB_FUNC_END sub_080ECE4C

