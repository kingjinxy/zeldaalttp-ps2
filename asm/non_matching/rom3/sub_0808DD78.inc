	THUMB_FUNC_START sub_0808DD78
sub_0808DD78: @ 0x0808DD78
	push {r4-r6,lr}
	ldr r6, _0808DDE8  @ =gRam
	ldr r0, _0808DDEC  @ =0x00000A02
	add r4, r6, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	ldrb r3, [r4]
	cmp r3, #31
	ble _0808DDE2
	sub r3, r3, #32
	cmp r3, #207
	bne _0808DDA0
	ldr r1, _0808DDF0  @ =0x000009E8
	add r0, r6, r1
	ldrh r1, [r0]
	add r1, r1, #1
	mov r2, #0
	strh r1, [r0]
	strb r2, [r4]
_0808DDA0:
	mov r0, #7
	and r0, r0, r3
	lsl r0, r0, #1
	mov r1, #248
	and r3, r3, r1
	asr r3, r3, #3
	mov r1, #163
	lsl r1, r1, #3
	add r5, r6, r1
	ldrh r2, [r5]
	mov r1, #3
	mov r4, #0
	orr r2, r2, r1
	strh r2, [r5]
	ldr r1, _0808DDF4  @ =0x000009B5
	add r6, r6, r1
	strb r4, [r6]
	ldr r1, _0808DDF8  @ =gUnknown_081676B2
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r0, _0808DDFC  @ =gUnknown_08153B64
	add r3, r3, r0
	ldrb r0, [r3]
	and r1, r1, r0
	cmp r1, #0
	beq _0808DDE2
	ldr r0, _0808DE00  @ =0x0000FFFC
	and r2, r2, r0
	strh r2, [r5]
	mov r0, #1
	strb r0, [r6]
_0808DDE2:
	pop {r4-r6}
	pop {r0}
	bx r0
_0808DDE8:
	.4byte gRam
_0808DDEC:
	.4byte 0x00000A02
_0808DDF0:
	.4byte 0x000009E8
_0808DDF4:
	.4byte 0x000009B5
_0808DDF8:
	.4byte gUnknown_081676B2
_0808DDFC:
	.4byte gUnknown_08153B64
_0808DE00:
	.4byte 0x0000FFFC
	THUMB_FUNC_END sub_0808DD78

