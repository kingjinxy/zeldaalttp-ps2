	THUMB_FUNC_START sub_081291C8
sub_081291C8: @ 0x081291C8
	push {r4,lr}
	ldr r2, _08129210  @ =gRam
	ldr r1, _08129214  @ =0x0000098E
	add r0, r2, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08129224
	ldr r3, _08129218  @ =0x00001AD5
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	mov r3, #192
	lsl r3, r3, #1
	add r1, r3, #0
	ldr r3, _0812921C  @ =0x00001ADC
	add r2, r2, r3
	orr r0, r0, r1
	strh r0, [r2]
	mov r3, #0
	ldr r4, _08129220  @ =gUnknown_02010170
_081291F4:
	lsr r0, r3, #1
	lsl r0, r0, #1
	add r0, r0, r4
	ldrh r1, [r2]
	strh r1, [r0]
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	add r0, r3, #2
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r3, #239
	bls _081291F4
	b _08129246
_08129210:
	.4byte gRam
_08129214:
	.4byte 0x0000098E
_08129218:
	.4byte 0x00001AD5
_0812921C:
	.4byte 0x00001ADC
_08129220:
	.4byte gUnknown_02010170
_08129224:
	mov r3, #0
	ldr r4, _08129250  @ =gUnknown_02010170
	ldr r0, _08129254  @ =0x00001ADC
	add r2, r2, r0
_0812922C:
	lsr r0, r3, #1
	lsl r0, r0, #1
	add r0, r0, r4
	ldrh r1, [r2]
	strh r1, [r0]
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	add r0, r3, #2
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r3, #251
	bls _0812922C
_08129246:
	bl sub_08129258
	pop {r4}
	pop {r0}
	bx r0
_08129250:
	.4byte gUnknown_02010170
_08129254:
	.4byte 0x00001ADC
	THUMB_FUNC_END sub_081291C8

