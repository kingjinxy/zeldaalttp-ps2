	THUMB_FUNC_START sub_0809EB58
sub_0809EB58: @ 0x0809EB58
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r5, r0, #0
	lsl r5, r5, #24
	bl sub_0809E970
	ldr r4, _0809EC14  @ =gRam
	ldr r0, _0809EC18  @ =0x00001714
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
	ldr r1, _0809EC1C  @ =0x000016C4
	add r0, r4, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	ldr r1, _0809EC20  @ =gUnknown_0816812C
	lsr r5, r5, #25
	lsl r5, r5, #1
	add r1, r5, r1
	mov r7, #0
	ldrsh r1, [r1, r7]
	add r0, r0, r1
	ldr r1, _0809EC24  @ =0x00000A0E
	add r3, r4, r1
	ldrh r1, [r3]
	and r0, r0, r1
	asr r0, r0, #3
	ldr r2, _0809EC28  @ =0x00000964
	add r1, r4, r2
	strh r0, [r1]
	mov r7, #182
	lsl r7, r7, #5
	add r1, r4, r7
	ldr r0, _0809EC2C  @ =gUnknown_08168134
	add r0, r5, r0
	ldrh r2, [r1]
	ldrh r0, [r0]
	add r0, r2, r0
	ldrh r3, [r3]
	and r0, r0, r3
	mov r1, #150
	lsl r1, r1, #4
	add r6, r4, r1
	strh r0, [r6]
	ldr r0, _0809EC30  @ =gUnknown_0816813C
	add r0, r5, r0
	ldrh r0, [r0]
	add r0, r2, r0
	add r7, r7, #72
	add r1, r4, r7
	strh r0, [r1]
	and r0, r0, r3
	ldr r1, _0809EC34  @ =0x00000968
	add r1, r1, r4
	mov r8, r1
	strh r0, [r1]
	ldr r0, _0809EC38  @ =gUnknown_08168144
	add r5, r5, r0
	ldrh r0, [r5]
	add r2, r2, r0
	add r7, r7, #4
	add r0, r4, r7
	strh r2, [r0]
	and r2, r2, r3
	mov r0, #151
	lsl r0, r0, #4
	add r5, r4, r0
	strh r2, [r5]
	ldr r1, _0809EC3C  @ =0x00000974
	add r4, r4, r1
	mov r0, #1
	strh r0, [r4]
	bl sub_080A0454
	mov r2, r8
	ldrh r0, [r2]
	strh r0, [r6]
	mov r0, #2
	strh r0, [r4]
	bl sub_080A0454
	ldrh r0, [r5]
	strh r0, [r6]
	mov r0, #4
	strh r0, [r4]
	bl sub_080A0454
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809EC14:
	.4byte gRam
_0809EC18:
	.4byte 0x00001714
_0809EC1C:
	.4byte 0x000016C4
_0809EC20:
	.4byte gUnknown_0816812C
_0809EC24:
	.4byte 0x00000A0E
_0809EC28:
	.4byte 0x00000964
_0809EC2C:
	.4byte gUnknown_08168134
_0809EC30:
	.4byte gUnknown_0816813C
_0809EC34:
	.4byte 0x00000968
_0809EC38:
	.4byte gUnknown_08168144
_0809EC3C:
	.4byte 0x00000974
	THUMB_FUNC_END sub_0809EB58

