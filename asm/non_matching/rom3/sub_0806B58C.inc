	THUMB_FUNC_START sub_0806B58C
sub_0806B58C: @ 0x0806B58C
	push {r4-r6,lr}
	ldr r4, _0806B648  @ =gRam
	ldr r0, _0806B64C  @ =0x000009E8
	add r6, r4, r0
	ldrh r5, [r6]
	ldr r0, _0806B650  @ =gUnknown_083C1EF8
	ldr r1, _0806B654  @ =0x0600C000
	bl LZ77UnCompVram
	ldr r0, _0806B658  @ =gUnknown_083C20E4
	ldr r1, _0806B65C  @ =0x0600E000
	bl LZ77UnCompVram
	add r5, r5, #1
	mov r3, #0
	mov r2, #0
	strh r5, [r6]
	ldr r5, _0806B660  @ =0x00000CF8
	add r1, r4, r5
	mov r0, #31
	strh r0, [r1]
	ldr r1, _0806B664  @ =0x00000CFC
	add r0, r4, r1
	strh r2, [r0]
	ldr r5, _0806B668  @ =0x000009D3
	add r0, r4, r5
	mov r2, #2
	strb r2, [r0]
	ldr r0, _0806B66C  @ =0x000009D4
	add r1, r4, r0
	mov r0, #50
	strb r0, [r1]
	ldr r5, _0806B670  @ =0x0000050C
	add r1, r4, r5
	mov r0, #248
	lsl r0, r0, #5
	strh r0, [r1]
	mov r0, #163
	lsl r0, r0, #3
	add r1, r4, r0
	ldr r0, _0806B674  @ =0x0000FC41
	strh r0, [r1]
	add r5, r5, #18
	add r1, r4, r5
	ldr r0, _0806B678  @ =0x00003C42
	strh r0, [r1]
	ldr r1, _0806B67C  @ =0x00000998
	add r0, r4, r1
	mov r1, #12
	strb r1, [r0]
	ldr r5, _0806B680  @ =0x00000999
	add r0, r4, r5
	strb r1, [r0]
	ldr r1, _0806B684  @ =0x00000952
	add r0, r4, r1
	mov r1, #8
	strh r1, [r0]
	sub r5, r5, #73
	add r0, r4, r5
	strh r1, [r0]
	ldr r1, _0806B688  @ =0x00000958
	add r0, r4, r1
	mov r1, #48
	strh r1, [r0]
	add r5, r5, #6
	add r0, r4, r5
	strh r1, [r0]
	mov r0, #182
	lsl r0, r0, #5
	add r1, r4, r0
	mov r0, #236
	strh r0, [r1]
	ldr r5, _0806B68C  @ =0x000016C4
	add r1, r4, r5
	mov r0, #120
	strh r0, [r1]
	mov r1, #161
	lsl r1, r1, #4
	add r0, r4, r1
	strb r2, [r0]
	ldr r5, _0806B690  @ =0x00000A3C
	add r1, r4, r5
	mov r0, #30
	strh r0, [r1]
	ldr r0, _0806B694  @ =0x000009AC
	add r1, r4, r0
	mov r0, #25
	strb r0, [r1]
	ldr r1, _0806B698  @ =0x000009AD
	add r4, r4, r1
	strb r3, [r4]
	pop {r4-r6}
	pop {r0}
	bx r0
_0806B648:
	.4byte gRam
_0806B64C:
	.4byte 0x000009E8
_0806B650:
	.4byte gUnknown_083C1EF8
_0806B654:
	.4byte 0x0600C000
_0806B658:
	.4byte gUnknown_083C20E4
_0806B65C:
	.4byte 0x0600E000
_0806B660:
	.4byte 0x00000CF8
_0806B664:
	.4byte 0x00000CFC
_0806B668:
	.4byte 0x000009D3
_0806B66C:
	.4byte 0x000009D4
_0806B670:
	.4byte 0x0000050C
_0806B674:
	.4byte 0x0000FC41
_0806B678:
	.4byte 0x00003C42
_0806B67C:
	.4byte 0x00000998
_0806B680:
	.4byte 0x00000999
_0806B684:
	.4byte 0x00000952
_0806B688:
	.4byte 0x00000958
_0806B68C:
	.4byte 0x000016C4
_0806B690:
	.4byte 0x00000A3C
_0806B694:
	.4byte 0x000009AC
_0806B698:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806B58C

