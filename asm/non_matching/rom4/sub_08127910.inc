	THUMB_FUNC_START sub_08127910
sub_08127910: @ 0x08127910
	push {r4,lr}
	add r2, r0, #0
	ldr r4, _08127944  @ =gRam
	ldr r1, _08127948  @ =0x0000098E
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08127958
	ldr r3, _0812794C  @ =0x00001AF8
	add r0, r4, r3
	ldr r0, [r0]
	sub r3, r3, #34
	add r1, r4, r3
	ldrh r1, [r1]
	add r1, r2, r1
	add r1, r1, #4
	bl sub_08129E0C
	ldr r2, _08127950  @ =0x00001AD2
	add r1, r4, r2
	ldrh r1, [r1]
	ldr r3, _08127954  @ =gTextPointer
	add r1, r1, r3
	b _08127978
_08127944:
	.4byte gRam
_08127948:
	.4byte 0x0000098E
_0812794C:
	.4byte 0x00001AF8
_08127950:
	.4byte 0x00001AD2
_08127954:
	.4byte gTextPointer
_08127958:
	ldr r1, _0812798C  @ =0x00001AF8
	add r0, r4, r1
	ldr r0, [r0]
	ldr r3, _08127990  @ =0x00001AD6
	add r1, r4, r3
	ldrh r1, [r1]
	add r1, r2, r1
	add r1, r1, #4
	bl sub_08129E0C
	ldr r2, _08127994  @ =0x00001AD2
	add r1, r4, r2
	ldrh r1, [r1]
	ldr r3, _08127998  @ =gTextPointer
	add r1, r1, r3
	sub r0, r0, #103
_08127978:
	strb r0, [r1]
	ldr r1, _0812799C  @ =gRam
	ldr r0, _08127994  @ =0x00001AD2
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
_0812798C:
	.4byte 0x00001AF8
_08127990:
	.4byte 0x00001AD6
_08127994:
	.4byte 0x00001AD2
_08127998:
	.4byte gTextPointer
_0812799C:
	.4byte gRam
	THUMB_FUNC_END sub_08127910

