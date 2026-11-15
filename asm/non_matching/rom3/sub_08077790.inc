	THUMB_FUNC_START sub_08077790
sub_08077790: @ 0x08077790
	push {r4,lr}
	ldr r0, _080777CC  @ =gRam
	ldr r1, _080777D0  @ =0x000009BB
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080777F4
	ldr r0, _080777D4  @ =gUnknown_0201C000
	ldr r1, _080777D8  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080777DC  @ =gUnknown_0201C800
	ldr r1, _080777E0  @ =0x0600C800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080777E4  @ =gUnknown_02024000
	ldr r1, _080777E8  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080777EC  @ =gUnknown_02024800
	ldr r1, _080777F0  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
	b _08077820
_080777CC:
	.4byte gRam
_080777D0:
	.4byte 0x000009BB
_080777D4:
	.4byte gUnknown_0201C000
_080777D8:
	.4byte 0x0600C000
_080777DC:
	.4byte gUnknown_0201C800
_080777E0:
	.4byte 0x0600C800
_080777E4:
	.4byte gUnknown_02024000
_080777E8:
	.4byte 0x0600A000
_080777EC:
	.4byte gUnknown_02024800
_080777F0:
	.4byte 0x0600A800
_080777F4:
	ldr r0, _08077828  @ =gUnknown_0201E000
	ldr r1, _0807782C  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077830  @ =gUnknown_0201E800
	ldr r1, _08077834  @ =0x0600C800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077838  @ =gUnknown_02026000
	ldr r1, _0807783C  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077840  @ =gUnknown_02026800
	ldr r1, _08077844  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
_08077820:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077828:
	.4byte gUnknown_0201E000
_0807782C:
	.4byte 0x0600C000
_08077830:
	.4byte gUnknown_0201E800
_08077834:
	.4byte 0x0600C800
_08077838:
	.4byte gUnknown_02026000
_0807783C:
	.4byte 0x0600A000
_08077840:
	.4byte gUnknown_02026800
_08077844:
	.4byte 0x0600A800
	THUMB_FUNC_END sub_08077790

