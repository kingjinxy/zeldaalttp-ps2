	THUMB_FUNC_START sub_081311E0
sub_081311E0: @ 0x081311E0
	push {r4-r7,lr}
	ldr r4, _0813125C  @ =gRam
	ldr r0, _08131260  @ =0x00000CF8
	add r5, r4, r0
	ldrh r1, [r5]
	ldr r2, _08131264  @ =gUnknown_0822BF26
	mov r0, #15
	and r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r1, [r0]
	ldr r2, _08131268  @ =0x00000978
	add r0, r4, r2
	mov r7, #0
	strh r1, [r0]
	ldr r0, _0813126C  @ =gUnknown_0822BF72
	ldr r3, _08131270  @ =0x00000CFA
	add r6, r4, r3
	ldrh r1, [r6]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r0, r1, r0
	ldrh r2, [r0]
	ldr r3, _08131274  @ =0x0000096C
	add r0, r4, r3
	strh r2, [r0]
	ldr r0, _08131278  @ =gUnknown_0822BF76
	add r0, r1, r0
	ldrh r2, [r0]
	add r3, r3, #4
	add r0, r4, r3
	strh r2, [r0]
	ldr r0, _0813127C  @ =gUnknown_0822BF7A
	add r1, r1, r0
	ldrh r1, [r1]
	ldr r2, _08131280  @ =0x00000974
	add r0, r4, r2
	strh r1, [r0]
	mov r0, #0
	bl sub_081310E8
	ldrh r2, [r6]
	cmp r2, #0
	bne _0813128C
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
	ldr r3, _08131284  @ =0x00000CFC
	add r1, r4, r3
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrh r1, [r1]
	cmp r0, r1
	bne _081312B8
	mov r0, #2
	eor r0, r0, r2
	strh r0, [r6]
	strh r7, [r5]
	ldr r0, _08131288  @ =0x000009E8
	add r1, r4, r0
	b _081312A4
	.byte 0x00
	.byte 0x00
_0813125C:
	.4byte gRam
_08131260:
	.4byte 0x00000CF8
_08131264:
	.4byte gUnknown_0822BF26
_08131268:
	.4byte 0x00000978
_0813126C:
	.4byte gUnknown_0822BF72
_08131270:
	.4byte 0x00000CFA
_08131274:
	.4byte 0x0000096C
_08131278:
	.4byte gUnknown_0822BF76
_0813127C:
	.4byte gUnknown_0822BF7A
_08131280:
	.4byte 0x00000974
_08131284:
	.4byte 0x00000CFC
_08131288:
	.4byte 0x000009E8
_0813128C:
	ldr r1, _081312AC  @ =0x00000CFC
	add r0, r4, r1
	ldrh r1, [r5]
	ldrh r0, [r0]
	cmp r1, r0
	bne _081312B4
	mov r0, #2
	eor r0, r0, r2
	strh r0, [r6]
	strh r7, [r5]
	ldr r2, _081312B0  @ =0x000009E8
	add r1, r4, r2
_081312A4:
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	b _081312B8
_081312AC:
	.4byte 0x00000CFC
_081312B0:
	.4byte 0x000009E8
_081312B4:
	sub r0, r1, #1
	strh r0, [r5]
_081312B8:
	ldr r0, _081312C8  @ =gRam
	ldr r3, _081312CC  @ =0x0000099B
	add r0, r0, r3
	mov r1, #1
	strb r1, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
_081312C8:
	.4byte gRam
_081312CC:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_081311E0

