	THUMB_FUNC_START sub_080D1BF4
sub_080D1BF4: @ 0x080D1BF4
	push {r4-r6,lr}
	add r5, r0, #0
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r4, _080D1C40  @ =gRam
	ldr r0, _080D1C44  @ =0x00001122
	add r2, r4, r0
	add r2, r5, r2
	ldrb r0, [r2]
	mov r1, #191
	and r1, r1, r0
	ldr r3, _080D1C48  @ =gUnknown_08174B54
	ldr r6, _080D1C4C  @ =0x00000FB2
	add r0, r4, r6
	add r0, r5, r0
	ldrb r0, [r0]
	add r0, r0, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	add r0, r5, #0
	bl sub_080C6240
	ldr r1, _080D1C50  @ =gUnknown_08174B58
	ldr r0, _080D1C54  @ =0x00000F52
	add r4, r4, r0
	add r4, r5, r4
	ldrb r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D1C40:
	.4byte gRam
_080D1C44:
	.4byte 0x00001122
_080D1C48:
	.4byte gUnknown_08174B54
_080D1C4C:
	.4byte 0x00000FB2
_080D1C50:
	.4byte gUnknown_08174B58
_080D1C54:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D1BF4

