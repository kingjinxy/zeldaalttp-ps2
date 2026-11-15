	THUMB_FUNC_START sub_08107144
sub_08107144: @ 0x08107144
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _08107160  @ =gRam
	ldr r2, _08107164  @ =0x00001062
	add r0, r0, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08107168
	add r0, r1, #0
	bl sub_08106528
	b _0810716E
_08107160:
	.4byte gRam
_08107164:
	.4byte 0x00001062
_08107168:
	add r0, r1, #0
	bl sub_081072EC
_0810716E:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08107144

	.byte 0x00
	.byte 0x00
