	THUMB_FUNC_START sub_0809ECF8
sub_0809ECF8: @ 0x0809ECF8
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	bl sub_0809E970
	ldr r5, _0809ED7C  @ =gRam
	ldr r0, _0809ED80  @ =0x00001714
	add r1, r5, r0
	mov r0, #0
	strb r0, [r1]
	ldr r1, _0809ED84  @ =0x000016C4
	add r0, r5, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	ldr r1, _0809ED88  @ =gUnknown_08168154
	lsr r4, r4, #25
	lsl r4, r4, #1
	add r1, r4, r1
	mov r3, #0
	ldrsh r1, [r1, r3]
	add r0, r0, r1
	ldr r1, _0809ED8C  @ =0x00000A0E
	add r2, r5, r1
	ldrh r1, [r2]
	and r0, r0, r1
	asr r0, r0, #3
	ldr r3, _0809ED90  @ =0x00000964
	add r1, r5, r3
	strh r0, [r1]
	mov r0, #182
	lsl r0, r0, #5
	add r1, r5, r0
	ldr r0, _0809ED94  @ =gUnknown_0816815C
	add r0, r4, r0
	ldrh r1, [r1]
	ldrh r0, [r0]
	add r0, r1, r0
	ldrh r2, [r2]
	and r0, r0, r2
	sub r3, r3, #4
	add r6, r5, r3
	strh r0, [r6]
	ldr r0, _0809ED98  @ =gUnknown_08168164
	add r4, r4, r0
	ldrh r0, [r4]
	add r1, r1, r0
	and r1, r1, r2
	ldr r0, _0809ED9C  @ =0x00000968
	add r4, r5, r0
	strh r1, [r4]
	ldr r1, _0809EDA0  @ =0x00000974
	add r5, r5, r1
	mov r0, #1
	strh r0, [r5]
	bl sub_080A0454
	ldrh r0, [r4]
	strh r0, [r6]
	mov r0, #2
	strh r0, [r5]
	bl sub_080A0454
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809ED7C:
	.4byte gRam
_0809ED80:
	.4byte 0x00001714
_0809ED84:
	.4byte 0x000016C4
_0809ED88:
	.4byte gUnknown_08168154
_0809ED8C:
	.4byte 0x00000A0E
_0809ED90:
	.4byte 0x00000964
_0809ED94:
	.4byte gUnknown_0816815C
_0809ED98:
	.4byte gUnknown_08168164
_0809ED9C:
	.4byte 0x00000968
_0809EDA0:
	.4byte 0x00000974
	THUMB_FUNC_END sub_0809ECF8

