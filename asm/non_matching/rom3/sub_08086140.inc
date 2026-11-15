	THUMB_FUNC_START sub_08086140
sub_08086140: @ 0x08086140
	push {r4-r7,lr}
	ldr r3, _080861F4  @ =gRam
	lsl r2, r0, #1
	ldr r4, _080861F8  @ =0x000018D0
	add r1, r3, r4
	add r2, r2, r1
	ldrh r4, [r2]
	mov r5, #151
	lsl r5, r5, #4
	add r1, r3, r5
	strh r4, [r1]
	mov r1, #0
	ldrsh r5, [r2, r1]
	ldr r2, _080861FC  @ =0x00000C06
	add r1, r3, r2
	strh r0, [r1]
	ldr r4, _08086200  @ =0x00000B08
	add r1, r3, r4
	strh r0, [r1]
	ldr r0, _08086204  @ =gUnknown_0816798C
	add r0, r0, #172
	ldr r4, [r0]
	ldr r0, _08086208  @ =0x0000097C
	add r3, r3, r0
	mov r0, #4
	strh r0, [r3]
	ldr r6, _0808620C  @ =gUnknown_02018000
	add r7, r3, #0
_08086178:
	add r0, r5, #0
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r4]
	strh r1, [r0]
	ldr r0, _08086210  @ =0x00001FFF
	and r0, r0, r5
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	ldr r1, _08086214  @ =gUnknown_0201C000
	add r0, r0, r1
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	add r0, r5, #0
	add r0, r0, #128
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	mov r2, #128
	lsl r2, r2, #1
	add r0, r5, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	mov r1, #192
	lsl r1, r1, #1
	add r0, r5, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	add r5, r5, #2
	ldrh r0, [r7]
	sub r0, r0, #1
	strh r0, [r7]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08086178
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080861F4:
	.4byte gRam
_080861F8:
	.4byte 0x000018D0
_080861FC:
	.4byte 0x00000C06
_08086200:
	.4byte 0x00000B08
_08086204:
	.4byte gUnknown_0816798C
_08086208:
	.4byte 0x0000097C
_0808620C:
	.4byte gUnknown_02018000
_08086210:
	.4byte 0x00001FFF
_08086214:
	.4byte gUnknown_0201C000
	THUMB_FUNC_END sub_08086140

