	THUMB_FUNC_START sub_08083AE4
sub_08083AE4: @ 0x08083AE4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	add r4, r0, #0
	ldr r0, _08083BD4  @ =gUnknown_02000400
	ldrh r1, [r0]
	lsl r1, r1, #1
	add r0, r0, #6
	add r2, r1, r0
	lsl r4, r4, #1
	ldr r3, _08083BD8  @ =gRam
	ldr r5, _08083BDC  @ =0x000019BC
	add r6, r3, r5
	add r6, r4, r6
	ldrh r0, [r6]
	strh r0, [r2]
	ldr r0, _08083BE0  @ =gUnknown_0200040C
	add r2, r1, r0
	add r5, r5, #32
	add r3, r3, r5
	mov r9, r3
	add r9, r9, r4
	mov r3, r9
	ldrh r0, [r3]
	strh r0, [r2]
	ldr r5, _08083BE4  @ =gUnknown_02000412
	add r2, r1, r5
	ldr r3, _08083BD8  @ =gRam
	ldr r5, _08083BE8  @ =0x000019FC
	add r0, r3, r5
	add r5, r4, r0
	ldrh r0, [r5]
	strh r0, [r2]
	ldr r0, _08083BEC  @ =gUnknown_02000418
	add r1, r1, r0
	ldr r2, _08083BF0  @ =0x00001A1C
	add r3, r3, r2
	mov r10, r3
	add r10, r10, r4
	mov r3, r10
	ldrh r0, [r3]
	strh r0, [r1]
	ldr r1, _08083BD8  @ =gRam
	sub r2, r2, #128
	add r0, r1, r2
	add r4, r4, r0
	ldrh r1, [r4]
	ldr r7, _08083BF4  @ =0x00003FFF
	add r0, r7, #0
	and r0, r0, r1
	bl sub_08080380
	asr r1, r0, #1
	lsl r0, r1, #1
	ldr r3, _08083BF8  @ =gUnknown_02018000
	mov r8, r3
	add r0, r0, r8
	ldrh r1, [r6]
	strh r1, [r0]
	ldrh r1, [r4]
	add r0, r7, #0
	and r0, r0, r1
	add r0, r0, #128
	bl sub_08080380
	asr r1, r0, #1
	lsl r0, r1, #1
	add r0, r0, r8
	mov r2, r9
	ldrh r1, [r2]
	strh r1, [r0]
	ldrh r1, [r4]
	add r0, r7, #0
	and r0, r0, r1
	add r0, r0, #2
	bl sub_08080380
	asr r1, r0, #1
	lsl r0, r1, #1
	add r0, r0, r8
	ldrh r1, [r5]
	strh r1, [r0]
	ldrh r1, [r4]
	add r0, r7, #0
	and r0, r0, r1
	add r0, r0, #130
	bl sub_08080380
	asr r1, r0, #1
	lsl r0, r1, #1
	add r0, r0, r8
	mov r3, r10
	ldrh r1, [r3]
	strh r1, [r0]
	ldrh r1, [r3]
	ldr r0, _08083BFC  @ =0x000001FF
	and r0, r0, r1
	ldr r5, _08083C00  @ =gUnknown_02002E40
	add r0, r0, r5
	ldrb r0, [r0]
	ldr r1, _08083C04  @ =gUnknown_03002B90
	strb r0, [r1]
	ldrh r0, [r4]
	add r1, r7, #0
	and r1, r1, r0
	asr r0, r1, #1
	ldr r3, _08083C04  @ =gUnknown_03002B90
	ldrb r2, [r3]
	bl sub_08083974
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08083BD4:
	.4byte gUnknown_02000400
_08083BD8:
	.4byte gRam
_08083BDC:
	.4byte 0x000019BC
_08083BE0:
	.4byte gUnknown_0200040C
_08083BE4:
	.4byte gUnknown_02000412
_08083BE8:
	.4byte 0x000019FC
_08083BEC:
	.4byte gUnknown_02000418
_08083BF0:
	.4byte 0x00001A1C
_08083BF4:
	.4byte 0x00003FFF
_08083BF8:
	.4byte gUnknown_02018000
_08083BFC:
	.4byte 0x000001FF
_08083C00:
	.4byte gUnknown_02002E40
_08083C04:
	.4byte gUnknown_03002B90
	THUMB_FUNC_END sub_08083AE4

