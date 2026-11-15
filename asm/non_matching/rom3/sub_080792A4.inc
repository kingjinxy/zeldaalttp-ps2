	THUMB_FUNC_START sub_080792A4
sub_080792A4: @ 0x080792A4
	push {r4-r6,lr}
	mov r6, r9
	mov r5, r8
	push {r5,r6}
	ldr r5, _08079314  @ =gUnknown_08150EA4
	ldr r4, _08079318  @ =gRam
	ldr r0, _0807931C  @ =0x00000ABE
	add r0, r0, r4
	mov r9, r0
	ldrh r1, [r0]
	ldr r2, _08079320  @ =0x00000B04
	add r4, r4, r2
	ldrh r0, [r4]
	add r1, r1, r0
	lsl r1, r1, #1
	add r0, r1, r5
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r2, _08079324  @ =gUnknown_02018000
	add r0, r0, r2
	ldr r6, _08079328  @ =gUnknown_08150E84
	add r1, r1, r6
	ldrh r1, [r1]
	ldr r2, _0807932C  @ =0x0600C000
	add r1, r1, r2
	mov r2, #128
	lsl r2, r2, #2
	mov r8, r2
	bl CpuFastSet
	mov r0, r9
	ldrh r1, [r0]
	ldrh r0, [r4]
	add r1, r1, r0
	lsl r1, r1, #1
	add r5, r1, r5
	ldrh r0, [r5]
	lsl r0, r0, #1
	ldr r2, _08079330  @ =gUnknown_0201C000
	add r0, r0, r2
	add r1, r1, r6
	ldrh r1, [r1]
	ldr r2, _08079334  @ =0x0600E000
	add r1, r1, r2
	mov r2, r8
	bl CpuFastSet
	ldrh r0, [r4]
	add r0, r0, #4
	strh r0, [r4]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r6}
	pop {r0}
	bx r0
_08079314:
	.4byte gUnknown_08150EA4
_08079318:
	.4byte gRam
_0807931C:
	.4byte 0x00000ABE
_08079320:
	.4byte 0x00000B04
_08079324:
	.4byte gUnknown_02018000
_08079328:
	.4byte gUnknown_08150E84
_0807932C:
	.4byte 0x0600C000
_08079330:
	.4byte gUnknown_0201C000
_08079334:
	.4byte 0x0600E000
	THUMB_FUNC_END sub_080792A4

