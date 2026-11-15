	THUMB_FUNC_START sub_0809EC40
sub_0809EC40: @ 0x0809EC40
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	bl sub_0809E970
	ldr r5, _0809ECD0  @ =gRam
	ldr r0, _0809ECD4  @ =0x00001714
	add r1, r5, r0
	mov r0, #0
	strb r0, [r1]
	mov r3, #182
	lsl r3, r3, #5
	add r1, r5, r3
	ldr r0, _0809ECD8  @ =gUnknown_08168154
	lsr r4, r4, #25
	lsl r4, r4, #1
	add r0, r4, r0
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r6, _0809ECDC  @ =0x00000A0E
	add r2, r5, r6
	ldrh r1, [r2]
	and r0, r0, r1
	mov r3, #150
	lsl r3, r3, #4
	add r1, r5, r3
	strh r0, [r1]
	ldr r6, _0809ECE0  @ =0x000016C4
	add r3, r5, r6
	mov r0, #0
	ldrsh r1, [r3, r0]
	ldr r0, _0809ECE4  @ =gUnknown_0816815C
	add r0, r4, r0
	mov r6, #0
	ldrsh r0, [r0, r6]
	add r1, r1, r0
	ldrh r0, [r2]
	and r1, r1, r0
	asr r1, r1, #3
	ldr r0, _0809ECE8  @ =0x00000964
	add r6, r5, r0
	strh r1, [r6]
	mov r1, #0
	ldrsh r0, [r3, r1]
	ldr r1, _0809ECEC  @ =gUnknown_08168164
	add r4, r4, r1
	mov r3, #0
	ldrsh r1, [r4, r3]
	add r0, r0, r1
	ldrh r1, [r2]
	and r0, r0, r1
	asr r0, r0, #3
	ldr r1, _0809ECF0  @ =0x00000968
	add r4, r5, r1
	strh r0, [r4]
	ldr r3, _0809ECF4  @ =0x00000974
	add r5, r5, r3
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
_0809ECD0:
	.4byte gRam
_0809ECD4:
	.4byte 0x00001714
_0809ECD8:
	.4byte gUnknown_08168154
_0809ECDC:
	.4byte 0x00000A0E
_0809ECE0:
	.4byte 0x000016C4
_0809ECE4:
	.4byte gUnknown_0816815C
_0809ECE8:
	.4byte 0x00000964
_0809ECEC:
	.4byte gUnknown_08168164
_0809ECF0:
	.4byte 0x00000968
_0809ECF4:
	.4byte 0x00000974
	THUMB_FUNC_END sub_0809EC40

