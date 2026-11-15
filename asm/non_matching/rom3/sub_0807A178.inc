	THUMB_FUNC_START sub_0807A178
sub_0807A178: @ 0x0807A178
	push {r4-r7,lr}
	mov r3, #1
	neg r3, r3
	ldr r4, _0807A1C0  @ =gRam
	ldr r6, _0807A1C4  @ =gUnknown_08152A98
	ldr r7, _0807A1C8  @ =gUnknown_08152AA2
	mov r5, #254
	ldr r0, _0807A1CC  @ =0x000018AE
	add r2, r4, r0
_0807A18A:
	add r2, r2, #2
	add r3, r3, #1
	ldrh r1, [r2]
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #48
	bne _0807A18A
	ldr r1, _0807A1D0  @ =0x00000AFE
	add r0, r4, r1
	strh r3, [r0]
	lsl r2, r3, #1
	ldr r3, _0807A1D4  @ =0x000018F0
	add r0, r4, r3
	add r0, r2, r0
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	add r3, r2, #0
	cmp r0, #0
	beq _0807A1DC
	ldr r5, _0807A1D8  @ =0x000016C5
	add r0, r4, r5
	ldrb r0, [r0]
	mov r1, #1
	and r1, r1, r0
	b _0807A1EA
	.byte 0x00
	.byte 0x00
_0807A1C0:
	.4byte gRam
_0807A1C4:
	.4byte gUnknown_08152A98
_0807A1C8:
	.4byte gUnknown_08152AA2
_0807A1CC:
	.4byte 0x000018AE
_0807A1D0:
	.4byte 0x00000AFE
_0807A1D4:
	.4byte 0x000018F0
_0807A1D8:
	.4byte 0x000016C5
_0807A1DC:
	ldr r1, _0807A258  @ =0x000016C1
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	add r0, r0, #1
	lsl r1, r0, #1
_0807A1EA:
	ldr r2, _0807A25C  @ =gUnknown_0200309C
	lsl r1, r1, #1
	add r0, r1, r6
	ldrh r0, [r0]
	strb r0, [r2]
	ldr r2, _0807A260  @ =0x000018D0
	add r0, r4, r2
	add r0, r3, r0
	ldrh r2, [r0]
	add r1, r1, r7
	ldrh r0, [r1]
	add r3, r2, r0
	ldr r2, _0807A264  @ =gUnknown_0200309A
	mov r1, #126
	add r0, r3, #0
	and r0, r0, r1
	ldr r5, _0807A268  @ =0x00000BA8
	add r1, r4, r5
	lsl r0, r0, #2
	ldrh r1, [r1]
	add r0, r0, r1
	strh r0, [r2]
	sub r2, r2, #2
	mov r0, #252
	lsl r0, r0, #5
	and r3, r3, r0
	ldr r0, _0807A26C  @ =0x00000BAA
	add r1, r4, r0
	lsr r0, r3, #4
	ldrh r1, [r1]
	add r0, r0, r1
	strh r0, [r2]
	ldr r2, _0807A270  @ =0x00000504
	add r1, r4, r2
	mov r0, #123
	bl sub_0812A324
	ldr r3, _0807A274  @ =0x00000AFC
	add r1, r4, r3
	mov r2, #0
	mov r0, #1
	strh r0, [r1]
	ldr r5, _0807A278  @ =0x0000097C
	add r0, r4, r5
	mov r1, #0
	ldrsh r0, [r0, r1]
	ldr r3, _0807A27C  @ =0x000009E6
	add r1, r4, r3
	add r0, r0, r1
	strb r2, [r0]
	bl sub_08123B60
	pop {r4-r7}
	pop {r0}
	bx r0
_0807A258:
	.4byte 0x000016C1
_0807A25C:
	.4byte gUnknown_0200309C
_0807A260:
	.4byte 0x000018D0
_0807A264:
	.4byte gUnknown_0200309A
_0807A268:
	.4byte 0x00000BA8
_0807A26C:
	.4byte 0x00000BAA
_0807A270:
	.4byte 0x00000504
_0807A274:
	.4byte 0x00000AFC
_0807A278:
	.4byte 0x0000097C
_0807A27C:
	.4byte 0x000009E6
	THUMB_FUNC_END sub_0807A178

