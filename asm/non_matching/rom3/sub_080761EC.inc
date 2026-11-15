	THUMB_FUNC_START sub_080761EC
sub_080761EC: @ 0x080761EC
	push {r4,lr}
	ldr r2, _0807623C  @ =gRam
	ldr r1, _08076240  @ =0x00000B98
	add r0, r2, r1
	ldrh r1, [r0]
	ldr r3, _08076244  @ =0x000009BE
	add r0, r2, r3
	ldrh r0, [r0]
	sub r4, r1, r0
	mov r0, #128
	lsl r0, r0, #1
	cmp r4, r0
	beq _08076208
	b _08076300
_08076208:
	ldr r1, _08076248  @ =0x000009BA
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0807626C
	ldr r0, _0807624C  @ =gUnknown_0201A000
	ldr r1, _08076250  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08076254  @ =gUnknown_0201B000
	ldr r1, _08076258  @ =0x0600D000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _0807625C  @ =gUnknown_02022000
	ldr r1, _08076260  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08076264  @ =gUnknown_02023000
	ldr r1, _08076268  @ =0x0600B000
	b _0807636A
	.byte 0x00
	.byte 0x00
_0807623C:
	.4byte gRam
_08076240:
	.4byte 0x00000B98
_08076244:
	.4byte 0x000009BE
_08076248:
	.4byte 0x000009BA
_0807624C:
	.4byte gUnknown_0201A000
_08076250:
	.4byte 0x0600C000
_08076254:
	.4byte gUnknown_0201B000
_08076258:
	.4byte 0x0600D000
_0807625C:
	.4byte gUnknown_02022000
_08076260:
	.4byte 0x0600A000
_08076264:
	.4byte gUnknown_02023000
_08076268:
	.4byte 0x0600B000
_0807626C:
	cmp r0, #1
	bne _080762B8
	ldr r0, _08076298  @ =gUnknown_0201E000
	ldr r1, _0807629C  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080762A0  @ =gUnknown_0201B000
	ldr r1, _080762A4  @ =0x0600D000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080762A8  @ =gUnknown_02026000
	ldr r1, _080762AC  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080762B0  @ =gUnknown_02023000
	ldr r1, _080762B4  @ =0x0600B000
	b _0807636A
_08076298:
	.4byte gUnknown_0201E000
_0807629C:
	.4byte 0x0600C000
_080762A0:
	.4byte gUnknown_0201B000
_080762A4:
	.4byte 0x0600D000
_080762A8:
	.4byte gUnknown_02026000
_080762AC:
	.4byte 0x0600A000
_080762B0:
	.4byte gUnknown_02023000
_080762B4:
	.4byte 0x0600B000
_080762B8:
	ldr r0, _080762E0  @ =gUnknown_0201E000
	ldr r1, _080762E4  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080762E8  @ =gUnknown_0201F000
	ldr r1, _080762EC  @ =0x0600D000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080762F0  @ =gUnknown_02026000
	ldr r1, _080762F4  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080762F8  @ =gUnknown_02027000
	ldr r1, _080762FC  @ =0x0600B000
	b _0807636A
_080762E0:
	.4byte gUnknown_0201E000
_080762E4:
	.4byte 0x0600C000
_080762E8:
	.4byte gUnknown_0201F000
_080762EC:
	.4byte 0x0600D000
_080762F0:
	.4byte gUnknown_02026000
_080762F4:
	.4byte 0x0600A000
_080762F8:
	.4byte gUnknown_02027000
_080762FC:
	.4byte 0x0600B000
_08076300:
	mov r0, #128
	lsl r0, r0, #2
	cmp r4, r0
	bne _080763BC
	ldr r3, _0807632C  @ =0x000009BA
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _08076344
	ldr r0, _08076330  @ =gUnknown_0201A800
	ldr r1, _08076334  @ =0x0600C800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08076338  @ =gUnknown_0201B800
	ldr r1, _0807633C  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08076340  @ =gUnknown_02022800
	b _0807635E
	.byte 0x00
	.byte 0x00
_0807632C:
	.4byte 0x000009BA
_08076330:
	.4byte gUnknown_0201A800
_08076334:
	.4byte 0x0600C800
_08076338:
	.4byte gUnknown_0201B800
_0807633C:
	.4byte 0x0600D800
_08076340:
	.4byte gUnknown_02022800
_08076344:
	cmp r0, #1
	bne _08076394
	ldr r0, _08076374  @ =gUnknown_0201E800
	ldr r1, _08076378  @ =0x0600C800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _0807637C  @ =gUnknown_0201B800
	ldr r1, _08076380  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08076384  @ =gUnknown_02026800
_0807635E:
	ldr r1, _08076388  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _0807638C  @ =gUnknown_02023800
	ldr r1, _08076390  @ =0x0600B800
_0807636A:
	add r2, r4, #0
	bl CpuFastSet
	b _080763BC
	.byte 0x00
	.byte 0x00
_08076374:
	.4byte gUnknown_0201E800
_08076378:
	.4byte 0x0600C800
_0807637C:
	.4byte gUnknown_0201B800
_08076380:
	.4byte 0x0600D800
_08076384:
	.4byte gUnknown_02026800
_08076388:
	.4byte 0x0600A800
_0807638C:
	.4byte gUnknown_02023800
_08076390:
	.4byte 0x0600B800
_08076394:
	ldr r0, _080763C4  @ =gUnknown_0201E800
	ldr r1, _080763C8  @ =0x0600C800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080763CC  @ =gUnknown_0201F800
	ldr r1, _080763D0  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080763D4  @ =gUnknown_02026800
	ldr r1, _080763D8  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080763DC  @ =gUnknown_02027800
	ldr r1, _080763E0  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
_080763BC:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080763C4:
	.4byte gUnknown_0201E800
_080763C8:
	.4byte 0x0600C800
_080763CC:
	.4byte gUnknown_0201F800
_080763D0:
	.4byte 0x0600D800
_080763D4:
	.4byte gUnknown_02026800
_080763D8:
	.4byte 0x0600A800
_080763DC:
	.4byte gUnknown_02027800
_080763E0:
	.4byte 0x0600B800
	THUMB_FUNC_END sub_080761EC

