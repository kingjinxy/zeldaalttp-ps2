	THUMB_FUNC_START sub_08079204
sub_08079204: @ 0x08079204
	push {r4-r6,lr}
	mov r6, r9
	mov r5, r8
	push {r5,r6}
	bl sub_0807FF10
	ldr r4, _08079274  @ =gRam
	ldr r1, _08079278  @ =0x00000ABE
	add r0, r4, r1
	mov r1, #0
	mov r9, r1
	mov r6, #0
	strh r6, [r0]
	ldr r1, _0807927C  @ =0x00000B04
	add r0, r4, r1
	strh r6, [r0]
	ldr r0, _08079280  @ =0x00000A4C
	add r0, r0, r4
	mov r8, r0
	strh r6, [r0]
	ldr r0, _08079284  @ =gUnknown_0201C000
	ldr r1, _08079288  @ =0x0600E000
	mov r5, #128
	lsl r5, r5, #4
	add r2, r5, #0
	bl CpuFastSet
	ldr r0, _0807928C  @ =gUnknown_02018000
	ldr r1, _08079290  @ =0x0600C000
	add r2, r5, #0
	bl CpuFastSet
	ldr r0, _08079294  @ =gUnknown_0201A000
	ldr r1, _08079298  @ =0x0600A000
	add r2, r5, #0
	bl CpuFastSet
	ldr r1, _0807929C  @ =0x000009AF
	add r0, r4, r1
	mov r1, r9
	strb r1, [r0]
	mov r0, r8
	strh r6, [r0]
	ldr r1, _080792A0  @ =0x000009E8
	add r0, r4, r1
	strh r6, [r0]
	mov r0, #201
	lsl r0, r0, #4
	add r4, r4, r0
	strh r6, [r4]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r6}
	pop {r0}
	bx r0
_08079274:
	.4byte gRam
_08079278:
	.4byte 0x00000ABE
_0807927C:
	.4byte 0x00000B04
_08079280:
	.4byte 0x00000A4C
_08079284:
	.4byte gUnknown_0201C000
_08079288:
	.4byte 0x0600E000
_0807928C:
	.4byte gUnknown_02018000
_08079290:
	.4byte 0x0600C000
_08079294:
	.4byte gUnknown_0201A000
_08079298:
	.4byte 0x0600A000
_0807929C:
	.4byte 0x000009AF
_080792A0:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08079204

