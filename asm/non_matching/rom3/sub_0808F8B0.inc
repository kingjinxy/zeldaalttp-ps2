	THUMB_FUNC_START sub_0808F8B0
sub_0808F8B0: @ 0x0808F8B0
	push {r4,r5,lr}
	ldr r4, _0808F9A4  @ =0x000038C8
	ldr r1, _0808F9A8  @ =0x00000816
	add r0, r4, #0
	bl sub_0808F5C0
	ldr r1, _0808F9AC  @ =0x00000818
	add r0, r4, #0
	bl sub_0808F5C0
	ldr r1, _0808F9B0  @ =0x0000081A
	add r0, r4, #0
	bl sub_0808F5C0
	ldr r1, _0808F9B4  @ =0x0000081C
	add r0, r4, #0
	bl sub_0808F5C0
	ldr r1, _0808F9B8  @ =0x00000896
	add r0, r4, #0
	bl sub_0808F5C0
	ldr r1, _0808F9BC  @ =0x0000089C
	add r0, r4, #0
	bl sub_0808F5C0
	ldr r0, _0808F9C0  @ =0x000038CC
	ldr r1, _0808F9C4  @ =0x00000898
	bl sub_0808F5C0
	ldr r0, _0808F9C8  @ =0x000038D0
	ldr r1, _0808F9CC  @ =0x0000089A
	bl sub_0808F5C0
	ldr r0, _0808F9D0  @ =0x000038D4
	ldr r1, _0808F9D4  @ =0x00000916
	bl sub_0808F5C0
	ldr r0, _0808F9D8  @ =0x000038D8
	ldr r4, _0808F9DC  @ =0x00000918
	add r1, r4, #0
	bl sub_0808F5C0
	ldr r0, _0808F9E0  @ =0x000038DC
	ldr r5, _0808F9E4  @ =0x0000091A
	add r1, r5, #0
	bl sub_0808F5C0
	ldr r0, _0808F9E8  @ =0x000038E0
	ldr r1, _0808F9EC  @ =0x0000091C
	bl sub_0808F5C0
	ldr r0, _0808F9F0  @ =0x000038E4
	ldr r1, _0808F9F4  @ =0x00000996
	bl sub_0808F5C0
	ldr r0, _0808F9F8  @ =0x000038E8
	ldr r1, _0808F9FC  @ =0x00000998
	bl sub_0808F5C0
	ldr r0, _0808FA00  @ =0x000038EC
	ldr r1, _0808FA04  @ =0x0000099A
	bl sub_0808F5C0
	ldr r0, _0808FA08  @ =0x000038F0
	ldr r1, _0808FA0C  @ =0x0000099C
	bl sub_0808F5C0
	lsl r4, r4, #1
	ldr r0, _0808FA10  @ =gUnknown_02018000
	add r2, r4, r0
	ldr r1, _0808FA14  @ =gUnknown_08155B4E
	ldr r3, _0808FA18  @ =0x000071E8
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r0, _0808FA1C  @ =gUnknown_02018002
	add r2, r4, r0
	add r3, r3, #2
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r0, _0808FA20  @ =gUnknown_02018040
	add r2, r4, r0
	add r3, r3, #2
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r0, _0808FA24  @ =gUnknown_02018042
	add r4, r4, r0
	ldr r2, _0808FA28  @ =0x000071EE
	add r0, r1, r2
	ldrh r0, [r0]
	strh r0, [r4]
	lsl r5, r5, #1
	ldr r3, _0808FA10  @ =gUnknown_02018000
	add r2, r5, r3
	ldr r3, _0808FA2C  @ =0x000071F0
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r0, _0808FA1C  @ =gUnknown_02018002
	add r2, r5, r0
	add r3, r3, #2
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r0, _0808FA20  @ =gUnknown_02018040
	add r2, r5, r0
	add r3, r3, #2
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r0, _0808FA24  @ =gUnknown_02018042
	add r5, r5, r0
	ldr r2, _0808FA30  @ =0x000071F6
	add r1, r1, r2
	ldrh r0, [r1]
	strh r0, [r5]
	pop {r4,r5}
	pop {r0}
	bx r0
_0808F9A4:
	.4byte 0x000038C8
_0808F9A8:
	.4byte 0x00000816
_0808F9AC:
	.4byte 0x00000818
_0808F9B0:
	.4byte 0x0000081A
_0808F9B4:
	.4byte 0x0000081C
_0808F9B8:
	.4byte 0x00000896
_0808F9BC:
	.4byte 0x0000089C
_0808F9C0:
	.4byte 0x000038CC
_0808F9C4:
	.4byte 0x00000898
_0808F9C8:
	.4byte 0x000038D0
_0808F9CC:
	.4byte 0x0000089A
_0808F9D0:
	.4byte 0x000038D4
_0808F9D4:
	.4byte 0x00000916
_0808F9D8:
	.4byte 0x000038D8
_0808F9DC:
	.4byte 0x00000918
_0808F9E0:
	.4byte 0x000038DC
_0808F9E4:
	.4byte 0x0000091A
_0808F9E8:
	.4byte 0x000038E0
_0808F9EC:
	.4byte 0x0000091C
_0808F9F0:
	.4byte 0x000038E4
_0808F9F4:
	.4byte 0x00000996
_0808F9F8:
	.4byte 0x000038E8
_0808F9FC:
	.4byte 0x00000998
_0808FA00:
	.4byte 0x000038EC
_0808FA04:
	.4byte 0x0000099A
_0808FA08:
	.4byte 0x000038F0
_0808FA0C:
	.4byte 0x0000099C
_0808FA10:
	.4byte gUnknown_02018000
_0808FA14:
	.4byte gUnknown_08155B4E
_0808FA18:
	.4byte 0x000071E8
_0808FA1C:
	.4byte gUnknown_02018002
_0808FA20:
	.4byte gUnknown_02018040
_0808FA24:
	.4byte gUnknown_02018042
_0808FA28:
	.4byte 0x000071EE
_0808FA2C:
	.4byte 0x000071F0
_0808FA30:
	.4byte 0x000071F6
	THUMB_FUNC_END sub_0808F8B0

