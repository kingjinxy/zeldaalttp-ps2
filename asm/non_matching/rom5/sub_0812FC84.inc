	THUMB_FUNC_START sub_0812FC84
sub_0812FC84: @ 0x0812FC84
	push {r4,r5,lr}
	ldr r1, _0812FCC0  @ =gUnknown_0822BA52
	ldr r0, _0812FCC4  @ =gShield
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r5, [r0]
	ldr r0, _0812FCC8  @ =gUnknown_0825460C
	ldr r4, _0812FCCC  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	lsl r5, r5, #1
	add r4, r5, r4
	ldr r1, _0812FCD0  @ =gUnknown_02008680
	add r0, r4, #0
	mov r2, #48
	bl CpuFastSet
	ldr r0, _0812FCD4  @ =gUnknown_02032200
	add r5, r5, r0
	ldr r1, _0812FCD8  @ =gUnknown_02008740
	add r0, r5, #0
	mov r2, #48
	bl CpuFastSet
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812FCC0:
	.4byte gUnknown_0822BA52
_0812FCC4:
	.4byte gShield
_0812FCC8:
	.4byte gUnknown_0825460C
_0812FCCC:
	.4byte gUnknown_02032000
_0812FCD0:
	.4byte gUnknown_02008680
_0812FCD4:
	.4byte gUnknown_02032200
_0812FCD8:
	.4byte gUnknown_02008740
	THUMB_FUNC_END sub_0812FC84

