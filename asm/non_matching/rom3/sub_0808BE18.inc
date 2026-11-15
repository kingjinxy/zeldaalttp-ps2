	THUMB_FUNC_START sub_0808BE18
sub_0808BE18: @ 0x0808BE18
	push {r4,r5,lr}
	ldr r2, _0808BE3C  @ =gRam
	ldr r1, _0808BE40  @ =0x00000C04
	add r3, r2, r1
	mov r1, #0
	strh r1, [r3]
	ldr r1, _0808BE44  @ =0x00000169
	add r5, r2, #0
	cmp r0, r1
	bne _0808BE50
	ldr r2, _0808BE48  @ =0x0000165E
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #2
	bls _0808BE4C
	bl sub_0808BB88
	b _0808BEAA
_0808BE3C:
	.4byte gRam
_0808BE40:
	.4byte 0x00000C04
_0808BE44:
	.4byte 0x00000169
_0808BE48:
	.4byte 0x0000165E
_0808BE4C:
	mov r0, #12
	strh r0, [r3]
_0808BE50:
	ldr r3, _0808BEB0  @ =0x0000096C
	add r0, r5, r3
	mov r1, #0
	ldrsh r0, [r0, r1]
	bl sub_080925A4
	sub r0, r0, #128
	ldr r2, _0808BEB4  @ =0x00000C0A
	add r1, r5, r2
	mov r4, #0
	strh r0, [r1]
	ldr r3, _0808BEB8  @ =0x000016C4
	add r0, r5, r3
	ldr r2, _0808BEBC  @ =0x00000952
	add r1, r5, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r3, _0808BEC0  @ =0x00000504
	add r1, r5, r3
	strh r0, [r1]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r5, r2
	ldr r3, _0808BEC4  @ =0x00000958
	add r2, r5, r3
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	ldr r3, _0808BEC8  @ =0x00000506
	add r2, r5, r3
	strh r0, [r2]
	mov r0, #55
	bl sub_0812A324
	ldr r1, _0808BECC  @ =0x000009E8
	add r0, r5, r1
	strh r4, [r0]
	ldr r2, _0808BED0  @ =0x00000C02
	add r0, r5, r2
	strh r4, [r0]
	ldr r3, _0808BED4  @ =0x000009AD
	add r1, r5, r3
	mov r0, #12
	strb r0, [r1]
_0808BEAA:
	pop {r4,r5}
	pop {r0}
	bx r0
_0808BEB0:
	.4byte 0x0000096C
_0808BEB4:
	.4byte 0x00000C0A
_0808BEB8:
	.4byte 0x000016C4
_0808BEBC:
	.4byte 0x00000952
_0808BEC0:
	.4byte 0x00000504
_0808BEC4:
	.4byte 0x00000958
_0808BEC8:
	.4byte 0x00000506
_0808BECC:
	.4byte 0x000009E8
_0808BED0:
	.4byte 0x00000C02
_0808BED4:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0808BE18

