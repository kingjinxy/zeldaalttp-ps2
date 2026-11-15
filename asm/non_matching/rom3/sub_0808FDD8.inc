	THUMB_FUNC_START sub_0808FDD8
sub_0808FDD8: @ 0x0808FDD8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _0808FF68  @ =0x00004BB8
	ldr r0, _0808FF6C  @ =gUnknown_02018000
	add r3, r1, r0
	ldr r2, _0808FF70  @ =gUnknown_08155B4E
	ldr r4, _0808FF74  @ =0x00006E08
	add r0, r2, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r7, _0808FF78  @ =gUnknown_02018002
	add r3, r1, r7
	add r4, r4, #2
	add r0, r2, r4
	ldrh r0, [r0]
	strh r0, [r3]
	add r7, r7, #62
	add r3, r1, r7
	add r4, r4, #2
	add r0, r2, r4
	ldrh r0, [r0]
	strh r0, [r3]
	add r7, r7, #2
	add r1, r1, r7
	ldr r3, _0808FF7C  @ =0x00006E0E
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _0808FF80  @ =0x00004BBC
	ldr r4, _0808FF6C  @ =gUnknown_02018000
	add r3, r1, r4
	ldr r7, _0808FF84  @ =0x00006E10
	add r0, r2, r7
	ldrh r7, [r0]
	strh r7, [r3]
	ldr r0, _0808FF78  @ =gUnknown_02018002
	add r3, r1, r0
	ldr r4, _0808FF88  @ =0x00006E12
	add r0, r2, r4
	ldrh r0, [r0]
	mov r12, r0
	strh r0, [r3]
	ldr r0, _0808FF8C  @ =gUnknown_02018040
	add r3, r1, r0
	add r4, r4, #2
	add r0, r2, r4
	ldrh r0, [r0]
	mov r10, r0
	strh r0, [r3]
	ldr r0, _0808FF90  @ =gUnknown_02018042
	add r1, r1, r0
	ldr r3, _0808FF94  @ =0x00006E16
	add r0, r2, r3
	ldrh r0, [r0]
	mov r9, r0
	strh r0, [r1]
	ldr r1, _0808FF98  @ =0x00004C38
	ldr r4, _0808FF6C  @ =gUnknown_02018000
	add r3, r1, r4
	ldr r4, _0808FF9C  @ =0x00006DF0
	add r0, r2, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FF78  @ =gUnknown_02018002
	add r3, r1, r0
	add r4, r4, #2
	add r0, r2, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FF8C  @ =gUnknown_02018040
	add r3, r1, r0
	add r4, r4, #2
	add r0, r2, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FF90  @ =gUnknown_02018042
	add r1, r1, r0
	ldr r3, _0808FFA0  @ =0x00006DF6
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _0808FFA4  @ =0x00004C3C
	ldr r4, _0808FF6C  @ =gUnknown_02018000
	add r3, r1, r4
	ldr r4, _0808FFA8  @ =0x00006DF8
	add r0, r2, r4
	ldrh r0, [r0]
	mov r8, r0
	strh r0, [r3]
	ldr r0, _0808FF78  @ =gUnknown_02018002
	add r3, r1, r0
	add r4, r4, #2
	add r0, r2, r4
	ldrh r6, [r0]
	strh r6, [r3]
	ldr r0, _0808FF8C  @ =gUnknown_02018040
	add r3, r1, r0
	add r4, r4, #2
	add r0, r2, r4
	ldrh r5, [r0]
	strh r5, [r3]
	ldr r0, _0808FF90  @ =gUnknown_02018042
	add r1, r1, r0
	ldr r3, _0808FFAC  @ =0x00006DFE
	add r0, r2, r3
	ldrh r4, [r0]
	strh r4, [r1]
	mov r1, #199
	lsl r1, r1, #7
	ldr r3, _0808FF6C  @ =gUnknown_02018000
	add r0, r1, r3
	strh r7, [r0]
	ldr r7, _0808FF78  @ =gUnknown_02018002
	add r0, r1, r7
	mov r3, r12
	strh r3, [r0]
	add r7, r7, #62
	add r0, r1, r7
	mov r3, r10
	strh r3, [r0]
	add r7, r7, #2
	add r1, r1, r7
	mov r0, r9
	strh r0, [r1]
	ldr r1, _0808FFB0  @ =0x00006384
	sub r7, r7, #66
	add r3, r1, r7
	ldr r7, _0808FFB4  @ =0x00006E18
	add r0, r2, r7
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FF78  @ =gUnknown_02018002
	add r3, r1, r0
	add r7, r7, #2
	add r0, r2, r7
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FF8C  @ =gUnknown_02018040
	add r3, r1, r0
	add r7, r7, #2
	add r0, r2, r7
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FF90  @ =gUnknown_02018042
	add r1, r1, r0
	ldr r3, _0808FFB8  @ =0x00006E1E
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	mov r1, #200
	lsl r1, r1, #7
	ldr r7, _0808FF6C  @ =gUnknown_02018000
	add r0, r1, r7
	mov r3, r8
	strh r3, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r6, [r0]
	ldr r3, _0808FF8C  @ =gUnknown_02018040
	add r0, r1, r3
	strh r5, [r0]
	add r7, r7, #64
	add r1, r1, r7
	strh r4, [r1]
	ldr r1, _0808FFBC  @ =0x00006404
	ldr r0, _0808FF6C  @ =gUnknown_02018000
	add r3, r1, r0
	mov r4, #220
	lsl r4, r4, #7
	add r0, r2, r4
	ldrh r0, [r0]
	strh r0, [r3]
	sub r7, r7, #64
	add r3, r1, r7
	add r4, r4, #2
	add r0, r2, r4
	ldrh r0, [r0]
	strh r0, [r3]
	add r7, r7, #62
	add r3, r1, r7
	add r4, r4, #2
	add r0, r2, r4
	ldrh r0, [r0]
	strh r0, [r3]
	add r7, r7, #2
	add r1, r1, r7
	ldr r0, _0808FFC0  @ =0x00006E06
	add r2, r2, r0
	ldrh r0, [r2]
	strh r0, [r1]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0808FF68:
	.4byte 0x00004BB8
_0808FF6C:
	.4byte gUnknown_02018000
_0808FF70:
	.4byte gUnknown_08155B4E
_0808FF74:
	.4byte 0x00006E08
_0808FF78:
	.4byte gUnknown_02018002
_0808FF7C:
	.4byte 0x00006E0E
_0808FF80:
	.4byte 0x00004BBC
_0808FF84:
	.4byte 0x00006E10
_0808FF88:
	.4byte 0x00006E12
_0808FF8C:
	.4byte gUnknown_02018040
_0808FF90:
	.4byte gUnknown_02018042
_0808FF94:
	.4byte 0x00006E16
_0808FF98:
	.4byte 0x00004C38
_0808FF9C:
	.4byte 0x00006DF0
_0808FFA0:
	.4byte 0x00006DF6
_0808FFA4:
	.4byte 0x00004C3C
_0808FFA8:
	.4byte 0x00006DF8
_0808FFAC:
	.4byte 0x00006DFE
_0808FFB0:
	.4byte 0x00006384
_0808FFB4:
	.4byte 0x00006E18
_0808FFB8:
	.4byte 0x00006E1E
_0808FFBC:
	.4byte 0x00006404
_0808FFC0:
	.4byte 0x00006E06
	THUMB_FUNC_END sub_0808FDD8

