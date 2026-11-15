	THUMB_FUNC_START sub_0807499C
sub_0807499C: @ 0x0807499C
	push {lr}
	ldr r0, _080749CC  @ =gUnknown_0814D864
	ldr r1, _080749D0  @ =gUnknown_02002D80
	mov r2, #32
	bl CpuSet
	ldr r0, _080749D4  @ =gUnknown_0814D964
	ldr r1, _080749D8  @ =gUnknown_02002E00
	mov r2, #32
	bl CpuSet
	ldr r0, _080749DC  @ =gRam
	ldr r1, _080749E0  @ =0x0000165E
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080749F0
	ldr r0, _080749E4  @ =gUnknown_0814D7A4
	ldr r1, _080749E8  @ =gUnknown_02002D40
	mov r2, #32
	bl CpuSet
	ldr r0, _080749EC  @ =gUnknown_0814D8A4
	b _08074A00
_080749CC:
	.4byte gUnknown_0814D864
_080749D0:
	.4byte gUnknown_02002D80
_080749D4:
	.4byte gUnknown_0814D964
_080749D8:
	.4byte gUnknown_02002E00
_080749DC:
	.4byte gRam
_080749E0:
	.4byte 0x0000165E
_080749E4:
	.4byte gUnknown_0814D7A4
_080749E8:
	.4byte gUnknown_02002D40
_080749EC:
	.4byte gUnknown_0814D8A4
_080749F0:
	cmp r0, #3
	bne _08074A1C
	ldr r0, _08074A0C  @ =gUnknown_0814D824
	ldr r1, _08074A10  @ =gUnknown_02002D40
	mov r2, #32
	bl CpuSet
	ldr r0, _08074A14  @ =gUnknown_0814D924
_08074A00:
	ldr r1, _08074A18  @ =gUnknown_02002DC0
	mov r2, #32
	bl CpuSet
	b _08074A30
	.byte 0x00
	.byte 0x00
_08074A0C:
	.4byte gUnknown_0814D824
_08074A10:
	.4byte gUnknown_02002D40
_08074A14:
	.4byte gUnknown_0814D924
_08074A18:
	.4byte gUnknown_02002DC0
_08074A1C:
	ldr r0, _08074A34  @ =gUnknown_0814D7E4
	ldr r1, _08074A38  @ =gUnknown_02002D40
	mov r2, #32
	bl CpuSet
	ldr r0, _08074A3C  @ =gUnknown_0814D8E4
	ldr r1, _08074A40  @ =gUnknown_02002DC0
	mov r2, #32
	bl CpuSet
_08074A30:
	pop {r0}
	bx r0
_08074A34:
	.4byte gUnknown_0814D7E4
_08074A38:
	.4byte gUnknown_02002D40
_08074A3C:
	.4byte gUnknown_0814D8E4
_08074A40:
	.4byte gUnknown_02002DC0
	THUMB_FUNC_END sub_0807499C

