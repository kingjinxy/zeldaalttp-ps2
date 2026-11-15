	THUMB_FUNC_START sub_0808CB08
sub_0808CB08: @ 0x0808CB08
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r4, r0, #0
	ldr r7, _0808CBC4  @ =gRam
	ldr r0, _0808CBC8  @ =0x00000978
	add r0, r0, r7
	mov r8, r0
	mov r1, #0
	mov r9, r1
	strh r4, [r0]
	ldr r2, _0808CBCC  @ =0x0000096C
	add r5, r7, r2
	mov r3, #0
	ldrsh r0, [r5, r3]
	bl sub_080925A4
	ldr r1, _0808CBD0  @ =gUnknown_08153B1E
	lsl r4, r4, #1
	add r4, r4, r1
	ldrh r1, [r4]
	add r1, r1, r0
	ldr r4, _0808CBD4  @ =0x00000C0A
	add r0, r7, r4
	strh r1, [r0]
	strh r1, [r5]
	ldr r0, _0808CBD8  @ =0x00000C04
	add r6, r7, r0
	mov r0, #20
	strh r0, [r6]
	ldr r1, _0808CBDC  @ =0x0000097C
	add r4, r7, r1
	mov r2, r9
	strh r2, [r4]
	mov r3, #0
	ldrsh r0, [r5, r3]
	bl sub_0813386C
	mov r0, #0
	ldrsh r1, [r4, r0]
	mov r0, #1
	neg r0, r0
	cmp r1, r0
	bne _0808CB80
	ldr r1, _0808CBE0  @ =0x000009C6
	add r0, r7, r1
	ldrh r1, [r0]
	ldr r2, _0808CBE4  @ =gUnknown_02002280
	add r1, r1, r2
	ldrb r0, [r1]
	mov r2, #32
	orr r0, r0, r2
	strb r0, [r1]
	mov r0, #123
	mov r1, #0
	bl sub_0812A324
	mov r0, #40
	strh r0, [r6]
_0808CB80:
	mov r3, #150
	lsl r3, r3, #4
	add r2, r7, r3
	ldr r1, _0808CBE8  @ =gUnknown_08153B26
	mov r4, r8
	mov r3, #0
	ldrsh r0, [r4, r3]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r4, [r2]
	add r0, r0, r4
	strh r0, [r2]
	ldr r0, _0808CBEC  @ =0x00000964
	add r2, r7, r0
	ldr r1, _0808CBF0  @ =gUnknown_08153B2E
	mov r3, r8
	mov r4, #0
	ldrsh r0, [r3, r4]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r1, [r2]
	add r0, r0, r1
	strh r0, [r2]
	bl sub_08074354
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808CBC4:
	.4byte gRam
_0808CBC8:
	.4byte 0x00000978
_0808CBCC:
	.4byte 0x0000096C
_0808CBD0:
	.4byte gUnknown_08153B1E
_0808CBD4:
	.4byte 0x00000C0A
_0808CBD8:
	.4byte 0x00000C04
_0808CBDC:
	.4byte 0x0000097C
_0808CBE0:
	.4byte 0x000009C6
_0808CBE4:
	.4byte gUnknown_02002280
_0808CBE8:
	.4byte gUnknown_08153B26
_0808CBEC:
	.4byte 0x00000964
_0808CBF0:
	.4byte gUnknown_08153B2E
	THUMB_FUNC_END sub_0808CB08

