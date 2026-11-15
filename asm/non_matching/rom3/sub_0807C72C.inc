	THUMB_FUNC_START sub_0807C72C
sub_0807C72C: @ 0x0807C72C
	push {r4,r5,lr}
	ldr r1, _0807C764  @ =gRam
	ldr r0, _0807C768  @ =0x00000AE6
	add r4, r1, r0
	ldrh r3, [r4]
	lsl r2, r3, #1
	ldr r5, _0807C76C  @ =0x00000C2A
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
	ldr r2, _0807C770  @ =0x00000AEC
	add r0, r1, r2
	strh r3, [r0]
	ldr r5, _0807C774  @ =0x00000AEE
	add r1, r1, r5
	strh r3, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807C764:
	.4byte gRam
_0807C768:
	.4byte 0x00000AE6
_0807C76C:
	.4byte 0x00000C2A
_0807C770:
	.4byte 0x00000AEC
_0807C774:
	.4byte 0x00000AEE
	THUMB_FUNC_END sub_0807C72C

