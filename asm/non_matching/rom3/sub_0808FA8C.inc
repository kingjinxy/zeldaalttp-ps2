	THUMB_FUNC_START sub_0808FA8C
sub_0808FA8C: @ 0x0808FA8C
	push {r4,lr}
	ldr r2, _0808FB64  @ =0x0000050C
	ldr r0, _0808FB68  @ =gUnknown_02018000
	add r3, r2, r0
	ldr r1, _0808FB6C  @ =gUnknown_08155B4E
	ldr r4, _0808FB70  @ =0x000048C0
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FB74  @ =gUnknown_02018002
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FB78  @ =gUnknown_02018040
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FB7C  @ =gUnknown_02018042
	add r2, r2, r0
	ldr r3, _0808FB80  @ =0x000048C6
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	mov r2, #162
	lsl r2, r2, #3
	ldr r4, _0808FB68  @ =gUnknown_02018000
	add r3, r2, r4
	ldr r4, _0808FB84  @ =0x000048C8
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FB74  @ =gUnknown_02018002
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FB78  @ =gUnknown_02018040
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FB7C  @ =gUnknown_02018042
	add r2, r2, r0
	ldr r3, _0808FB88  @ =0x000048CE
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r2, _0808FB8C  @ =0x0000058C
	ldr r4, _0808FB68  @ =gUnknown_02018000
	add r3, r2, r4
	ldr r4, _0808FB90  @ =0x000048D0
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FB74  @ =gUnknown_02018002
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FB78  @ =gUnknown_02018040
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FB7C  @ =gUnknown_02018042
	add r2, r2, r0
	ldr r3, _0808FB94  @ =0x000048D6
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	mov r2, #178
	lsl r2, r2, #3
	ldr r4, _0808FB68  @ =gUnknown_02018000
	add r3, r2, r4
	ldr r4, _0808FB98  @ =0x000048D8
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FB74  @ =gUnknown_02018002
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FB78  @ =gUnknown_02018040
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FB7C  @ =gUnknown_02018042
	add r2, r2, r0
	ldr r3, _0808FB9C  @ =0x000048DE
	add r1, r1, r3
	ldrh r0, [r1]
	strh r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808FB64:
	.4byte 0x0000050C
_0808FB68:
	.4byte gUnknown_02018000
_0808FB6C:
	.4byte gUnknown_08155B4E
_0808FB70:
	.4byte 0x000048C0
_0808FB74:
	.4byte gUnknown_02018002
_0808FB78:
	.4byte gUnknown_02018040
_0808FB7C:
	.4byte gUnknown_02018042
_0808FB80:
	.4byte 0x000048C6
_0808FB84:
	.4byte 0x000048C8
_0808FB88:
	.4byte 0x000048CE
_0808FB8C:
	.4byte 0x0000058C
_0808FB90:
	.4byte 0x000048D0
_0808FB94:
	.4byte 0x000048D6
_0808FB98:
	.4byte 0x000048D8
_0808FB9C:
	.4byte 0x000048DE
	THUMB_FUNC_END sub_0808FA8C

