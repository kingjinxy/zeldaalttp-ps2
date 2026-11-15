	THUMB_FUNC_START sub_0811A8C4
sub_0811A8C4: @ 0x0811A8C4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _0811A95C  @ =gRam
	ldr r2, _0811A960  @ =0x00000DCF
	add r1, r4, r2
	add r1, r0, r1
	ldrb r1, [r1]
	ldr r5, _0811A964  @ =0x0000096C
	add r3, r4, r5
	strb r1, [r3]
	add r2, r2, #20
	add r1, r4, r2
	add r1, r0, r1
	ldrb r2, [r1]
	add r5, r5, #1
	add r1, r4, r5
	strb r2, [r1]
	ldr r2, _0811A968  @ =0x00000DC5
	add r1, r4, r2
	add r1, r0, r1
	ldrb r1, [r1]
	ldr r2, _0811A96C  @ =0x00000968
	add r5, r4, r2
	strb r1, [r5]
	ldr r2, _0811A970  @ =0x00000DD9
	add r1, r4, r2
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r2, _0811A974  @ =0x00000969
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _0811A978  @ =0x000016C4
	add r0, r4, r1
	ldrh r1, [r3]
	sub r1, r1, #8
	ldrh r0, [r0]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r1, r0, #16
	asr r0, r0, #16
	cmp r0, #0
	bge _0811A920
	neg r0, r0
	lsl r0, r0, #16
	lsr r1, r0, #16
_0811A920:
	ldr r3, _0811A97C  @ =0x00000974
	add r2, r4, r3
	strh r1, [r2]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrh r1, [r5]
	sub r1, r1, #12
	ldrh r0, [r0]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r1, r0, #16
	asr r0, r0, #16
	cmp r0, #0
	bge _0811A944
	neg r0, r0
	lsl r0, r0, #16
	lsr r1, r0, #16
_0811A944:
	lsl r0, r1, #16
	asr r0, r0, #16
	mov r3, #0
	ldrsh r1, [r2, r3]
	add r0, r0, r1
	mov r1, #252
	and r0, r0, r1
	lsr r0, r0, #2
	pop {r4,r5}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0811A95C:
	.4byte gRam
_0811A960:
	.4byte 0x00000DCF
_0811A964:
	.4byte 0x0000096C
_0811A968:
	.4byte 0x00000DC5
_0811A96C:
	.4byte 0x00000968
_0811A970:
	.4byte 0x00000DD9
_0811A974:
	.4byte 0x00000969
_0811A978:
	.4byte 0x000016C4
_0811A97C:
	.4byte 0x00000974
	THUMB_FUNC_END sub_0811A8C4

