	THUMB_FUNC_START sub_0807C6E0
sub_0807C6E0: @ 0x0807C6E0
	push {r4,r5,lr}
	ldr r1, _0807C718  @ =gRam
	ldr r0, _0807C71C  @ =0x00000AE4
	add r4, r1, r0
	ldrh r3, [r4]
	lsl r2, r3, #1
	ldr r5, _0807C720  @ =0x00000C2A
	add r0, r1, r5
	add r2, r2, r0
	mov r5, #151
	lsl r5, r5, #4
	add r0, r1, r5
	ldrh r0, [r0]
	lsl r0, r0, #16
	asr r0, r0, #17
	strh r0, [r2]
	add r3, r3, #1
	strh r3, [r4]
	ldr r2, _0807C724  @ =0x00000AEC
	add r0, r1, r2
	strh r3, [r0]
	ldr r5, _0807C728  @ =0x00000AEE
	add r1, r1, r5
	strh r3, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807C718:
	.4byte gRam
_0807C71C:
	.4byte 0x00000AE4
_0807C720:
	.4byte 0x00000C2A
_0807C724:
	.4byte 0x00000AEC
_0807C728:
	.4byte 0x00000AEE
	THUMB_FUNC_END sub_0807C6E0

