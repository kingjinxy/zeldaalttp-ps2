	THUMB_FUNC_START sub_0812E554
sub_0812E554: @ 0x0812E554
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r7, _0812E6E4  @ =gUnknown_0822B324
	ldr r0, [r7]
	ldr r4, _0812E6E8  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812E6EC  @ =gUnknown_02008800
	add r0, r4, #0
	mov r2, #56
	bl CpuFastSet
	ldr r5, _0812E6F0  @ =gUnknown_02032200
	ldr r1, _0812E6F4  @ =gUnknown_020088E0
	add r0, r5, #0
	mov r2, #56
	bl CpuFastSet
	ldr r0, _0812E6F8  @ =gUnknown_02032160
	ldr r1, _0812E6FC  @ =gUnknown_020089C0
	mov r2, #40
	bl CpuFastSet
	ldr r0, _0812E700  @ =gUnknown_02032400
	mov r10, r0
	ldr r1, _0812E704  @ =gUnknown_02008A60
	mov r2, #16
	bl CpuFastSet
	ldr r0, _0812E708  @ =gUnknown_02032360
	ldr r1, _0812E70C  @ =gUnknown_02008AA0
	mov r2, #40
	bl CpuFastSet
	ldr r1, _0812E710  @ =gUnknown_02032600
	mov r9, r1
	ldr r1, _0812E714  @ =gUnknown_02008B40
	mov r0, r9
	mov r2, #16
	bl CpuFastSet
	ldr r0, _0812E718  @ =gUnknown_02032100
	ldr r1, _0812E71C  @ =gUnknown_02008B80
	mov r2, #24
	bl CpuFastSet
	ldr r0, _0812E720  @ =gUnknown_02032300
	ldr r1, _0812E724  @ =gUnknown_02008BE0
	mov r2, #24
	bl CpuFastSet
	mov r0, #190
	lsl r0, r0, #1
	add r0, r0, r7
	mov r8, r0
	ldr r0, [r0]
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r0, _0812E728  @ =gUnknown_020324C0
	ldr r1, _0812E72C  @ =gUnknown_02008C40
	mov r2, #32
	bl CpuFastSet
	ldr r0, _0812E730  @ =gUnknown_020326C0
	ldr r1, _0812E734  @ =gUnknown_02008CC0
	mov r2, #32
	bl CpuFastSet
	ldr r0, _0812E738  @ =gUnknown_02032540
	ldr r1, _0812E73C  @ =gUnknown_02008D40
	mov r2, #24
	bl CpuFastSet
	ldr r0, _0812E740  @ =gUnknown_02032740
	ldr r1, _0812E744  @ =gUnknown_02008DA0
	mov r2, #24
	bl CpuFastSet
	ldr r0, _0812E748  @ =gUnknown_020325A0
	ldr r1, _0812E74C  @ =gUnknown_02008E00
	mov r2, #8
	bl CpuFastSet
	ldr r0, _0812E750  @ =gUnknown_020327A0
	ldr r1, _0812E754  @ =gUnknown_02008E20
	mov r2, #8
	bl CpuFastSet
	ldr r0, [r7]
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r0, _0812E758  @ =gUnknown_02032440
	ldr r1, _0812E75C  @ =gUnknown_02008E40
	mov r2, #32
	bl CpuFastSet
	ldr r0, _0812E760  @ =gUnknown_02032640
	ldr r1, _0812E764  @ =gUnknown_02008EC0
	mov r2, #32
	bl CpuFastSet
	mov r1, #192
	lsl r1, r1, #1
	add r6, r7, r1
	ldr r0, [r6]
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r0, _0812E768  @ =gUnknown_02032060
	ldr r1, _0812E76C  @ =gUnknown_02008F40
	mov r2, #104
	bl CpuFastSet
	ldr r1, _0812E770  @ =gUnknown_020090E0
	mov r0, r10
	mov r2, #8
	bl CpuFastSet
	ldr r0, _0812E774  @ =gUnknown_02032260
	ldr r1, _0812E778  @ =gUnknown_02009100
	mov r2, #104
	bl CpuFastSet
	ldr r1, _0812E77C  @ =gUnknown_020092A0
	mov r0, r9
	mov r2, #8
	bl CpuFastSet
	ldr r0, _0812E780  @ =gUnknown_02032420
	ldr r1, _0812E784  @ =gUnknown_020092C0
	mov r2, #56
	bl CpuFastSet
	ldr r0, _0812E788  @ =gUnknown_02032620
	ldr r1, _0812E78C  @ =gUnknown_020093A0
	mov r2, #56
	bl CpuFastSet
	mov r1, r8
	ldr r0, [r1]
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r0, _0812E790  @ =gUnknown_020325C0
	ldr r1, _0812E794  @ =gUnknown_02009480
	mov r2, #16
	bl CpuFastSet
	ldr r0, _0812E798  @ =gUnknown_020327C0
	ldr r1, _0812E79C  @ =gUnknown_020094C0
	mov r2, #16
	bl CpuFastSet
	mov r1, #168
	lsl r1, r1, #1
	add r0, r7, r1
	ldr r0, [r0]
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812E7A0  @ =gUnknown_02009800
	add r0, r4, #0
	mov r2, #64
	bl CpuFastSet
	ldr r1, _0812E7A4  @ =gUnknown_02009900
	add r0, r5, #0
	mov r2, #64
	bl CpuFastSet
	ldr r0, [r6]
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812E7A8  @ =gUnknown_0200A600
	add r0, r4, #0
	mov r2, #24
	bl CpuFastSet
	ldr r1, _0812E7AC  @ =gUnknown_0200A660
	add r0, r5, #0
	mov r2, #24
	bl CpuFastSet
	bl sub_0812FDEC
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812E6E4:
	.4byte gUnknown_0822B324
_0812E6E8:
	.4byte gUnknown_02032000
_0812E6EC:
	.4byte gUnknown_02008800
_0812E6F0:
	.4byte gUnknown_02032200
_0812E6F4:
	.4byte gUnknown_020088E0
_0812E6F8:
	.4byte gUnknown_02032160
_0812E6FC:
	.4byte gUnknown_020089C0
_0812E700:
	.4byte gUnknown_02032400
_0812E704:
	.4byte gUnknown_02008A60
_0812E708:
	.4byte gUnknown_02032360
_0812E70C:
	.4byte gUnknown_02008AA0
_0812E710:
	.4byte gUnknown_02032600
_0812E714:
	.4byte gUnknown_02008B40
_0812E718:
	.4byte gUnknown_02032100
_0812E71C:
	.4byte gUnknown_02008B80
_0812E720:
	.4byte gUnknown_02032300
_0812E724:
	.4byte gUnknown_02008BE0
_0812E728:
	.4byte gUnknown_020324C0
_0812E72C:
	.4byte gUnknown_02008C40
_0812E730:
	.4byte gUnknown_020326C0
_0812E734:
	.4byte gUnknown_02008CC0
_0812E738:
	.4byte gUnknown_02032540
_0812E73C:
	.4byte gUnknown_02008D40
_0812E740:
	.4byte gUnknown_02032740
_0812E744:
	.4byte gUnknown_02008DA0
_0812E748:
	.4byte gUnknown_020325A0
_0812E74C:
	.4byte gUnknown_02008E00
_0812E750:
	.4byte gUnknown_020327A0
_0812E754:
	.4byte gUnknown_02008E20
_0812E758:
	.4byte gUnknown_02032440
_0812E75C:
	.4byte gUnknown_02008E40
_0812E760:
	.4byte gUnknown_02032640
_0812E764:
	.4byte gUnknown_02008EC0
_0812E768:
	.4byte gUnknown_02032060
_0812E76C:
	.4byte gUnknown_02008F40
_0812E770:
	.4byte gUnknown_020090E0
_0812E774:
	.4byte gUnknown_02032260
_0812E778:
	.4byte gUnknown_02009100
_0812E77C:
	.4byte gUnknown_020092A0
_0812E780:
	.4byte gUnknown_02032420
_0812E784:
	.4byte gUnknown_020092C0
_0812E788:
	.4byte gUnknown_02032620
_0812E78C:
	.4byte gUnknown_020093A0
_0812E790:
	.4byte gUnknown_020325C0
_0812E794:
	.4byte gUnknown_02009480
_0812E798:
	.4byte gUnknown_020327C0
_0812E79C:
	.4byte gUnknown_020094C0
_0812E7A0:
	.4byte gUnknown_02009800
_0812E7A4:
	.4byte gUnknown_02009900
_0812E7A8:
	.4byte gUnknown_0200A600
_0812E7AC:
	.4byte gUnknown_0200A660
	THUMB_FUNC_END sub_0812E554

